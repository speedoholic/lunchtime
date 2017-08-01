//
//  RestaurantListTableViewController.swift
//  LunchTime
//
//  Created by KUSHAL ASHOK on 01/08/17.
//  Copyright © 2017 KUSHAL ASHOK. All rights reserved.
//

import UIKit
import Alamofire
import RealmSwift

let CLIENT_ID = "R3QSMJO1425HC35QIKSMB4Y3TWLBXIF0BQRLCTFSLAORBDTY"
let CLIENT_SECRET = "UYPCR4FA3R1INN3DOLG5JXZJJLA15ICNWELLGQSF3NZELXYA"
let urlString = "https://api.foursquare.com/v2/venues/explore?ll=40.7,-74&section=food&limit=50&client_id=\(CLIENT_ID)&client_secret=\(CLIENT_SECRET)&v=20170801&m=foursquare"

class RestaurantListTableViewController: UITableViewController {

    @IBOutlet var restaurantTableView: UITableView!
    
    var itemNames = [""]

    override func viewDidLoad() {
        super.viewDidLoad()
        self.title = "Restaurants"
        loadData()
        
        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false

    }
    
    func loadData() {
        
        Alamofire.request(urlString).responseJSON { response in
            print("Request: \(String(describing: response.request))")   // original url request
            print("Response: \(String(describing: response.response))") // http url response
            print("Result: \(response.result)")                         // response serialization result
            
            if let json = response.result.value as? [String: Any]{
                print("JSON: \(json)") // serialized json response
            }
            
            if let data = response.data, let utf8Text = String(data: data, encoding: .utf8) {
                print("Data: \(utf8Text)") // original server data as UTF8 string
                
                let jsonFromData = try? JSONSerialization.jsonObject(with: data, options: [])
                if let dictionary = jsonFromData as? [String: Any] {
                    if let nestedDictionary = dictionary["response"] as? [String: Any] {
                        // access nested dictionary values by key
                        if let groups = nestedDictionary["groups"] as? [[String:Any]] {
                            let groupObject = groups[0]
                                if let itemsArray = groupObject["items"] as? [[String: Any]] {
                                    
                                    let realm = try! Realm()
                                    realm.beginWrite()
                                    
                                    for item:[String: Any] in itemsArray
                                    {
                                        let venue = item["venue"] as? [String:Any]
                                        
                                        let venueObject:Venue = Venue()
                                        if let id = venue?["id"] as? String
                                        {
                                            venueObject.id = id
                                        }
                                        
                                        if let name = venue?["name"] as? String
                                        {
                                            venueObject.name = name
                                        }
                                        
//                                        if  let location = venue["location"] as? [String: AnyObject]
//                                        {
//                                            if let longitude = location["lng"] as? Float
//                                            {
//                                                venueObject.longitude = longitude
//                                            }
//                                            
//                                            if let latitude = location["lat"] as? Float
//                                            {
//                                                venueObject.latitude = latitude
//                                            }
//                                            
//                                            if let formattedAddress = location["formattedAddress"] as? [String]
//                                            {
//                                                venueObject.address = formattedAddress.joinWithSeparator(" ")
//                                            }
//                                        }
                                        
                                        realm.add(venueObject, update: true)
                                    }
                                    print(itemsArray[0])
                                }
                        }
                    }
                    
                    self.parseVenues()
                }
            }
        }
        
        
    }
    
    func parseVenues() {
        let realm = try! Realm()
        let venues = realm.objects(Venue.self)
        
        for venue in venues
        {
            self.itemNames.append(venue.name)
        }
        self.tableView.reloadData()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return itemNames.count
    }

    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        var cell = tableView.dequeueReusableCell(withIdentifier: "cellIdentifier", for: indexPath)
        if cell == nil
        {
            cell = UITableViewCell(style: UITableViewCellStyle.subtitle, reuseIdentifier: "cellIdentifier")
        }
        cell.textLabel?.text = itemNames[indexPath.row]
        return cell
    }
 

    /*
    // Override to support conditional editing of the table view.
    override func tableView(_ tableView: UITableView, canEditRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the specified item to be editable.
        return true
    }
    */

    /*
    // Override to support editing the table view.
    override func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCellEditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == .delete {
            // Delete the row from the data source
            tableView.deleteRows(at: [indexPath], with: .fade)
        } else if editingStyle == .insert {
            // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
        }    
    }
    */

    /*
    // Override to support rearranging the table view.
    override func tableView(_ tableView: UITableView, moveRowAt fromIndexPath: IndexPath, to: IndexPath) {

    }
    */

    /*
    // Override to support conditional rearranging of the table view.
    override func tableView(_ tableView: UITableView, canMoveRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the item to be re-orderable.
        return true
    }
    */

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
