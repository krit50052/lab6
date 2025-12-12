#include<iostream>
using namespace std;

int main(){
    int n, even=0, odd=0;
while (true)
{
    cout << "Enter an integer: ";
    cin >> n;
    if (n ==0){
        break;
    }
}
if (n%2==0){
    even++;
} else {
    odd++;
}
    
    cout << "\n#Even numbers = " << even << "\n";
    cout << "\n#Odd numbers = " << odd << "\n";
    return 0;
}
