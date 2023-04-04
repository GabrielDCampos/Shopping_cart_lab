//
//  main.cpp
//  OnlineShoppingCartLab4
//
//  Created by gabriel campos original on 3/17/20.
//  Copyright © 2020 gabriel campos original. All rights reserved.
//

#include <iostream>
#include <string>
#include "itemToPurchase.hpp"
using namespace std;


int main() {
    
    int itemsPurchase = 2;
    ItemToPurchase *item = new ItemToPurchase[itemsPurchase];
   

    //loop to purchase items
    for (int i = 0; i < itemsPurchase; i++) {

        cout << "Item " << i+1 << endl; //add 1 as index of loop is 0 based

        cout << "Enter the item name:" << endl;
        string name;
        getline(cin,name);
        item[i].SetName(name);
        cout << "Enter the item price:" << endl;
        int price;
        cin >> price;
        item[i].SetPrice(price);
        cout << "Enter the item quantity:" << endl;
        int quantity;
        cin >> quantity;
        item[i].SetQuantity(quantity);
        cin.ignore();
        cout << endl;
    }
    
      cout << "TOTAL COST" << endl;
       int total = 0;
       for (int i = 0; i < itemsPurchase; i++) {
           cout << item[i].GetName() << " " << item[i].GetQuantity() << " @ $" << item[i].GetPrice();
           int cost = item[i].GetPrice() * item[i].GetQuantity();
           total = total + cost;
           cout << " = $" << cost << endl;
       }
       cout << endl;
       cout << "Total: $" << total << endl;
      
       return 0;
    }

