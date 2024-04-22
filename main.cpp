#include <iostream>
using namespace std;

// updates from user1
int main(){

  ItemToPurchase item1();
  ItemToPurchase item2();
  string name1, name2;
  int price1, price2;
  int quantity1, quantity2;

  cout << "Item 1" << endl;
  cout << "  Enter the item name:" << endl;
  cin >> name1;
  item1.SetName(name1);
  cout << "  Enter the item price:" << endl;
  cin >> price1;
  item1.SetPrice(price1);
  cout << "Enter the item quantity:" << endl;
  cin >> quantity1;
  item1.SetQuantity(quantity1);
  cout << endl;

  cin.ignore();

  cout << "Item 2" << endl;
  cout << "  Enter the item name:" << endl;
  cin >> name2;
  item1.SetName(name2);
  cout << "  Enter the item price:" << endl;
  cin >> price2;
  item1.SetPrice(price2);
  cout << "Enter the item quantity:" << endl;
  cin >> quantity2;
  item1.SetQuantity(quantity2);

  cout << endl;

  cout << "TOTAL COST" << endl;
  cout << item1.GetName() << item1.GetQuantity << " @" << item1.GetPrice << " = " << (item1.GetQuantity * item1.GetPrice) << endl;
  cout << item2.GetName() << item2.GetQuantity << " @" << item2.GetPrice << " = " << (item2.GetQuantity * item2.GetPrice) << endl;
  return 0;
}
