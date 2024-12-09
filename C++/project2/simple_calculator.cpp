// Develop a calculator program that performs basic arithmetic
// operations such as addition, subtraction, multiplication, and
// division. Allow the user to input two numbers and choose an
// operation to perform.

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "_____________Welcome to the CLI Calculator _____________";
    double num1, num2;
    char operation;

    // Ask the user for input
    cout << "\nEnter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation
    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (operation == '/') {
        // Check for division by zero
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error! Division by zero." << endl;
        }
    } else {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}