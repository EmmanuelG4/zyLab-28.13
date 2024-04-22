#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

//constructor
ItemToPurchase::ItemToPurchase(){
  itemName = "none";
  itemPrice = 0;
  itemQuantity = 0;
}

// getters
string ItemToPurchase::GetName(){
  return itemName;
}
int ItemToPurchase::GetPrice(){
  return itemPrice;
}
int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}

// setters
void ItemToPurchase::SetName(string newName){
  itemName = newName;
}
void ItemToPurchase::SetPrice(int newPrice){
  itemPrice = newPrice;
}
void ItemToPurchase::SetQuantity(int newQuantity){
  itemQuantity = newQuantity;
}
