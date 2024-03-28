#include <iostream>

using namespace std;

class MyClass {
  private:
    int x;
    void add(int n) {
      x += n;
    }
  public:
    MyClass(int x) : x(x) {};

    void print()
    {
      cout << "x: " << x << endl;
    }
}