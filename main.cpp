#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   /* Type your code here */
   ItemToPurchase item1;
   ItemToPurchase item2;
   string name1, name2;
   int price1, price2, total1, total2;
   int quantity1, quantity2;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, name1);
   item1.SetName(name1);
   cout << "Enter the item price:" << endl;
   cin >> price1;
   item1.SetPrice(price1);
   cout << "Enter the item quantity:" << endl;
   cin >> quantity1;
   item1.SetQuantity(quantity1);
   cout << endl;
   
   cin.ignore();
   
   cout << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, name2);
   item2.SetName(name2);
   cout << "Enter the item price:" << endl;
   cin >> price2;
   item2.SetPrice(price2);
   cout << "Enter the item quantity:" << endl;
   cin >> quantity2;
   item2.SetQuantity(quantity2);
   total1 = item1.GetQuantity() * item1.GetPrice();
   total2 = item2.GetQuantity() * item2.GetPrice();
   
   cout << endl;
   
   cout << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << total1 << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << total2 << endl;
   cout << endl;
   cout << "Total: $" << (total1 + total2) << endl; 
      
   return 0;
}
