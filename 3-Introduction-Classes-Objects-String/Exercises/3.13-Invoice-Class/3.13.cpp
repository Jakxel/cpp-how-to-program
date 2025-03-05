// Class invoice that a hardware store might be use
//the invoice shoul include four data member, a number, description, and a quantity of the item being purchase and the price
#include <iostream>
#include <string>
using namespace std;

class Invoice
{
  public:
  explicit Invoice (int key, string desc, int qty, int prc)
  {
    itemNumber = key;
    description = desc;
    quantity = (qty > 0) ? qty : 0;
    price = (prc > 0) ? qty : 0;
  }

  int getItemNumber() const { return itemNumber; }
  string getDescription() const { return description; }
  int getQuantity() const { return quantity; }
  int getPrice() const { return price; }

  void setItemNumber(int key) {itemNumber = key;}
  void setDescription(string desc) {description = desc;}
  void setQuantity(int qty) {quantity = qty;}
  void setPrice(int prc) {price = prc;}

  int getInvoiceAmount() const{
    return quantity * price;
  }

  private:
    int itemNumber;
    string description;
    int quantity;
    int price;
};

int main ()
{
  Invoice invoice1(1, "Lorem Ipsum,", 3, 10);

  cout << "Item Number: " << invoice1.getItemNumber() << endl;
  cout << "Description: " << invoice1.getDescription() << endl;
  cout << "Quantity: " << invoice1.getQuantity() << endl;
  cout << "Price per unit: $" << invoice1.getPrice() << endl;
  cout << "Total Invoice Amount: $" << invoice1.getInvoiceAmount() << endl;

  return 0;
};