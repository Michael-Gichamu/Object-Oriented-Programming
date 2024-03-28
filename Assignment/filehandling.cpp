#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream outputFile;
  ifstream inputFile;

  outputFile.open("file.txt");
  if (outputFile.is_open()) {
    outputFile << "Hello, World!";
    outputFile.close();
  } else {
    cout << "Could not open file for writing" << endl;
  }

  inputFile.open("file.txt");
  if (inputFile.is_open()) {
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    inputFile.close();
  } else {
    cout << "Could not open file for reading" << endl;
  }

  return 0;
}