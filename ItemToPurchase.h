#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase{
    private:
    string itemName;
    int itemPrice;
    int itemQuantity;

    public:
    ItemToPurchase();
    string GetName();
    int GetPrice();
    int GetQuantity();
    void SetName(string newName);
    void SetPrice(int newPrice);
    void SetQuantity(int newQuantity);
};

#endif
