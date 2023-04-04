//
//  itemToPurchase.hpp
//  OnlineShoppingCartLab4
//
//  Created by gabriel campos original on 3/17/20.
//  Copyright © 2020 gabriel campos original. All rights reserved.
//

#ifndef itemToPurchase_hpp
#define itemToPurchase_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class ItemToPurchase {
    
public:
    
    ItemToPurchase();
    ItemToPurchase(string, string, int, int);
    void SetName(string name);
    void SetPrice(int price);
    void SetQuantity(int quant);
    string GetName()const;
    int GetPrice()const;
    int GetQuantity()const;
    
    void SetItemDiscription(string);
    string GetItemDiscription()const;
    void PrintItemDiscription();
    void PrintItemCost();
    
private:
    
    string itemDisc;
    string itemName;
    int itemPrice;
    int itemQant;
    
};


#endif /* itemToPurchase_hpp */
