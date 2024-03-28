#include <iostream>
using namespace std;

int main() {
  int i, sum;

  cout << "Displays the sum of all the even numbers between 5 and 10 \n";
    
  for(i = 5;i<=10;i++) {
    if (i % 2 == 0) {
      sum += i;
    }
  }
  cout << "result: " << sum << endl;
  return 0;
}