//
//  ShopingCart.cpp
//  OnlineShoppingCartLab4
//
//  Created by gabriel campos original on 3/17/20.
//  Copyright © 2020 gabriel campos original. All rights reserved.
//

#include "ShopingCart.hpp"

ShopingCart::ShopingCart(){
    CustomerName = "none";
    CurrentDate = "17 mar 2020";
    
};

ShopingCart::ShopingCart(string name, string date){
    
    CustomerName = name;
    CurrentDate = date;
}
string ShopingCart::GetCustomerName()const{
    
    return CustomerName;
};
string ShopingCart::GetDate()const{
    
    return CurrentDate;
    
};
void ShopingCart::AddItem(ItemToPurchase item){
    
    for (int i = 0; i < CartItems.size(); i++){
        
        if ( CartItems.at(i).GetName() == item.GetName()){
            cout << "item in cart" << endl;
            return;
        }
    }
    
    CartItems.push_back(item);
    
};
void ShopingCart::RemoveItem(string itemName){
    
    for (int i = 0; i < CartItems.size(); i++){
        if (CartItems.at(1).GetName() == itemName){
            CartItems.erase(CartItems.begin() + i);
            return;
        }
    }
    
};
void ShopingCart::ModifyItem(ItemToPurchase item){
    
    for(int i = 0; i < CartItems.size(); i++){
        if (CartItems.at(i).GetName() == item.GetName()){
            CartItems.at(i).SetQuantity(item.GetQuantity());
            return;
        }
    }
    
};
int ShopingCart::GetNumItemsInCart()const{
    int temp = 0;
    for(int i = 0; i < CartItems.size(); i++){
        temp += CartItems.at(i).GetQuantity();
       
    }
    return temp;
    
};
int ShopingCart::GetCostOfCart()const{
    int temp = 0;
    for (int i = 0; i < CartItems.size(); i++){
        
        temp += CartItems.at(i).GetQuantity();

    }
    
    return temp;
};
void ShopingCart::PrintTotal(){
    
    if (CartItems.size() == 0){
        
        cout << "cart empty" << endl;
        return;
    }
    for (int i = 0 ; i < CartItems.size(); i++){
        
        cout << endl << CartItems.at(i).GetName() << " " << CartItems.at(i).GetQuantity() << "@" << CartItems.at(i).GetPrice() << " = $" << (CartItems.at(i).GetQuantity() * CartItems.at(i).GetPrice());
    }
    
    cout << endl << "Total: $" << GetCostOfCart() << endl;
    
};
void ShopingCart::PrintDescriptions(){
    if (CartItems.size() == 0){

        cout << "cart empty" << endl;
        
    }else
    
        cout << "Item Discription" << endl;
    
        for (int i = 0;i < CartItems.size(); i++){
        
            cout << CartItems.at(i).GetName() << ": " << CartItems.at(i).GetItemDiscription() << endl;
        };
    
};
