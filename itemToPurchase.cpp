//
//  itemToPurchase.cpp
//  OnlineShoppingCartLab4
//
//  Created by gabriel campos original on 3/17/20.
//  Copyright © 2020 gabriel campos original. All rights reserved.
//

#include "itemToPurchase.hpp"

ItemToPurchase::ItemToPurchase(){
    
    itemName = "none";
    itemPrice = 0.00;
    itemQant = 0;
    
}
ItemToPurchase::ItemToPurchase(string name, string discrip, int price, int quant){

    itemPrice = price;
    itemName = name;
    itemQant = quant;
    itemDisc = discrip;
    
}

void ItemToPurchase::SetName(string name){
    
    itemName = name;
    
}
void ItemToPurchase::SetPrice(int price){
    if (itemPrice >= 0)
        itemPrice = price;
    
}
void ItemToPurchase::SetQuantity(int quant){
    if (itemQant <= 0)
        itemQant = quant;
    
}
string ItemToPurchase::GetName()const{
    
    return itemName;
}
int ItemToPurchase::GetPrice()const{
    
    return itemPrice;
    
}
int ItemToPurchase::GetQuantity()const{
    
    return itemQant;
    
}

void ItemToPurchase::SetItemDiscription(string item){
    
    itemDisc = item;
    
}
string ItemToPurchase::GetItemDiscription()const{
    return itemDisc;
    
}
void ItemToPurchase::PrintItemDiscription(){
    
    cout << GetName()<< ":" << GetItemDiscription();
    
}
void ItemToPurchase::PrintItemCost(){
    
    int temp;
    
    temp = GetPrice()*GetQuantity();
    cout << GetName() << GetPrice() << "@" << GetQuantity() << temp;
    
}
