#include <iostream>

using namespace std;

int main() {

    int ans = 1;
    for (int i = 1; i <= 6; ++i) {
        ans = ans * i;
    }
    cout << "No ways 6 books can be arranged is: " << ans << endl;

    return 0;
}