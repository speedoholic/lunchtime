//
//  venue.swift
//  LunchTime
//
//  Created by KUSHAL ASHOK on 01/08/17.
//  Copyright © 2017 KUSHAL ASHOK. All rights reserved.
//

import Foundation
import RealmSwift

class Venue: Object
{
    dynamic var id:String = ""
    dynamic var name:String = ""
    dynamic var review:String = ""
    
    override static func primaryKey() -> String?
    {
        return "id";
    }
}
