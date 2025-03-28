#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1 and 20 are: ";

    for (int num = 2; num <= 20; num++) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) { // Check divisibility
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}
