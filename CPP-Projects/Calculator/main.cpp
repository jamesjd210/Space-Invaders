#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;
    
    double result;

    try {
        switch(operation) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            default:
                cout << "Invalid Operation" << endl;
                return 1;
        }

        cout << "This result is: " << result << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
        return 1;
    }
    return 0;
}