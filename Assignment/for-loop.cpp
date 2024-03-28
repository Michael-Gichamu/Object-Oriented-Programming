#include <iostream>
using namespace std;

int main() {
  int i, j, multiple;

  for(i = 0;i<=5;i++){
      if (i == 0) {
        cout << "   ";
      } else {
        cout << i << "  ";   
      }
    for(j=1;j<5;j++) {
        if (i == 0) {
            multiple = 1 * j;
        } else {
            multiple = i * j;;   
        }
        if (multiple >= 10 ) {
            cout << multiple << "  ";   
        } else {
            cout << multiple << "   ";
        }
    }
    cout << endl;
  }
}