#include <iostream>
using namespace std;

int main() {
    int n;
    int even = 0;
    int odd = 0; 
    
    while (true) {
        cout << "Enter an integer: ";
        cin >> n;
        if (n == 0) {
            break;
        }
        if (n % 2 == 0) {
            even++; 
        } else {
            odd++;
        }
    }
    cout << "#Even numbers = " << even;
    cout << "\n#Odd numbers = " << odd;
    return 0;
}
