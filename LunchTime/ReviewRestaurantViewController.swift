//
//  ReviewRestaurantViewController.swift
//  LunchTime
//
//  Created by KUSHAL ASHOK on 01/08/17.
//  Copyright © 2017 KUSHAL ASHOK. All rights reserved.
//

import UIKit
import RealmSwift

class ReviewRestaurantViewController: UIViewController {

    @IBOutlet weak var restaurantName: UILabel!
    @IBOutlet weak var reviewTextView: UITextView!
    @IBOutlet weak var submitButton: UIButton!
    
    var venue:Venue?
    var restaurantNameText = ""
    var restaurantReviewText = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        self.title = "Restaurant Review"
        restaurantName.text = restaurantNameText
        reviewTextView.text = venue?.review
    }
    
    @IBAction func submitButtonTapped(_ sender: UIButton) {
        saveReview()
        navigationController?.popViewController(animated: true)
    }
    
    func saveReview () {
        let realm = try! Realm()
        realm.beginWrite()
        
        venue?.review = reviewTextView.text
        
        do {
            try realm.commitWrite()
            print("Committing write...")
        }
        catch (let e)
        {
            print("Y U NO REALM ? \(e)")
        }
        
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
