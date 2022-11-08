#include <iostream>
using namespace std;
//
// Simple Calculator App
// by Reddblue
//

int main() {
    long x, y;
    long long int sum;
    string type;
    int exit;
    string inputExit;
    while(true){
        cout << "Input the first number: ";
        cin >> x;
        cout << "Input the second number: ";
        cin >> y;
        cout << "Do you want to [Add (A) / Minus (M) / Times (T) / Divide (D)]: ";
        cin >> type;
        if (type == "A") {
            sum = x + y;
            cout << "Sum is: " << sum;
            cout << "\n";
        } else if (type == "M") {
            sum = x - y;
            cout << "Sum is " << sum;
            cout << "\n";
        } else if (type == "T") {
            sum = x * y;
            cout << "Sum is " << sum;
            cout << "\n";
        } else if (type == "D") {
            sum = x / y;
            cout << "Sum is " << sum;
            cout << "\n";
        }
        cout << "Do you want to exit? Type 'Q' to exit | Type anything else to continue: ";
        cin >> inputExit;
        if (inputExit == "Q") {
            break;
        }
        else if(inputExit != "Q"){
            cout << "\n";
            continue;
        }
    }
    return 0;
}
