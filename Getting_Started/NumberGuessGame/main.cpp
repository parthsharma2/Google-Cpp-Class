#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
    int random_number, input_number, ctr;
    ctr = 0;

    srand(time(NULL));
    random_number = rand() % 100 + 1;

    while (true)
    {
        ctr++;
        cout << "Guess a Number (0-100): " << endl;
        if (!(cin >> input_number)) {
            cout << "Please enter a number" << endl;
        }
        else if(input_number == -1) {
            break;
        }
        else {
            if (random_number < input_number)
                cout << "The secret number is lower than " << input_number << endl;
            else if (random_number > input_number)
                cout << "The secret number is higher than " << input_number << endl;
            else{
                cout << "You guessed it: " << random_number << endl;
                break;
            }
        }
    }
    cout << "Random Number: " << random_number << endl;
    cout << "It took you " << ctr << " turns to guess the secret number." <<endl;

    return 0;
}
