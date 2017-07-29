#include<iostream>

using namespace std;

int factorial(int n) {
  int fact = 1;
  for(int i = 1; i <= n; i++)
    fact = fact * i;
  return fact;
}

int main() {
  cout << "6 Books can be arranged in " << factorial(6) << " ways, if arranged from left to right." << endl;
}
