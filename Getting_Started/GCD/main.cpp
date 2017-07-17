#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a > b)
        return gcd(b, a % b);
    if (b > a)
        return gcd(a, b % a);
    else
        return a;

}

int main() {
    int a, b;

    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;

    cout << "GCD of the two numbers is: " << gcd(a,b) << endl;

    return 0;
}
