#include <iostream>
using namespace std;

int main() {
  string guest_name;
  int days_stayed, total_cost, discount, net_cost;

  cout << "Enter the guest's name: ";
  cin >> guest_name;
  cout << "Enter the number of days stayed: ";
  cin >> days_stayed;

  total_cost = days_stayed * 850;

  if (days_stayed <= 5) {
    discount = total_cost * 0.1;
  } else if (days_stayed > 5 && days_stayed <= 10) {
    discount = total_cost * 0.15;
  } else if (days_stayed > 10 && days_stayed <= 20) {
    discount = total_cost * 0.2;
  } else {
    discount = total_cost * 0.25;
  }
  
  net_cost = total_cost - discount;

  cout << "The net balance for " << guest_name << " is " << "$" << net_cost
  << endl;
}