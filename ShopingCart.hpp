//
//  ShopingCart.hpp
//  OnlineShoppingCartLab4
//
//  Created by gabriel campos original on 3/17/20.
//  Copyright © 2020 gabriel campos original. All rights reserved.
//

#ifndef ShopingCart_hpp
#define ShopingCart_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "itemToPurchase.hpp"

class ShopingCart {
    
public:
    ShopingCart();
    ShopingCart(string name, string date);
    string GetCustomerName()const;
    string GetDate()const;
    void AddItem(ItemToPurchase item);
    void RemoveItem(string itemName);
    void ModifyItem(ItemToPurchase item);
    int GetNumItemsInCart()const;
    int GetCostOfCart()const;
    void PrintTotal();
    void PrintDescriptions();
    
private:
    string CustomerName;
    string CurrentDate;
    vector<ItemToPurchase> CartItems;
     
};

#endif /* ShopingCart_hpp */
