#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile("plan.txt");

  MyFile << "Edit this";

  MyFile.close();
}

