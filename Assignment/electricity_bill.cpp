#include <iostream>
using namespace std;

class ElectricityBill {
private:
  string customerName;
  double unitsConsumed;
  double totalBill;
public:
  void get() {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
  }

  void calculateBill() {
      if (unitsConsumed <= 100) {
        totalBill = unitsConsumed * 1.20;
      } else if (unitsConsumed <= 200) {
        totalBill = 100 * 1.20 + (unitsConsumed - 100) * 2.00;
      } else {
          totalBill = 100 * 1.20 + 200 * 2.00 + (unitsConsumed - 300) * 3.00;
      }
  }

  void put() {
      cout << "\nCustomer Name: " << customerName;
      cout << "\nUnits Consumed: " << unitsConsumed;
      cout << "\nTotal Bill: Ksh " << totalBill << endl;
  }
};


int main() {
  ElectricityBill customer;

  customer.get();

  customer.calculateBill();

  customer.put();

  return 0;
}