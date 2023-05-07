#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main() {
    char operation = ' ';
    double first = 0.D;
    double second = 0.D;
    double result = 0.D;
    int precision = 2;
    
    while (true) {
        cout << "SELECT OPERATION (^, *, -, +, /)" << endl;
        cin >> operation;
        
        if (operation == '^' || operation == '*' || operation == '-' || operation == '+' || operation == '/') {
            cout << "Enter the first number" << endl;
            cin >> first;
            
            cout << "Enter the second number" << endl;
            cin >> second;
            
            switch (operation) {
                case '^': {
                    result = pow(first, second);
                    break;
                }
                
                case '*': {
                    result = first * second;
                    break;
                }
                
                case '-': {
                    result = first - second;
                    break;
                }
                
                case '+': {
                    result = first + second;
                    break;
                }
                
                case '/': {
                    if (second == 0) {
                        cout << "[!] DIVISION BY ZERO IS IMPOSSIBLE!" << endl;
                        continue;
                    }
                    result = first / second;
                    break;
                }
            }
            
            cout.precision(precision);
            cout << "Result: " << fixed << result << endl;
            
            char repeat = ' ';
            cout << "Do you want to repeat? (Y/N)" << endl;
            cin >> repeat;
            
            if (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N') {
                cout << "[!] INVALID INPUT, PLEASE TRY AGAIN!" << endl;
                continue;
            }
            
            if (repeat == 'n' || repeat == 'N') {
                cout << "Good luck to you, see you later!" << endl;
                break;
            }
            
            cin.clear();
            cin.ignore();
        }
        else {
            cout << "[!] UNKNOWN OPERATION!" << endl;
            continue;
        }
    }
    return 0;
}