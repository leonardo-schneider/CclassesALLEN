//Leonardo Schneider
//Module 13 Project 9

#include <iostream>
using namespace std;

class Calculator {
public:
    Calculator() {
        num1 = 0.0;
        num2 = 0.0;
    }
    
    void setNum1(double n1) {
        num1 = n1;
    }
    
    void setNum2(double n2) {
        num2 = n2;
    }
    
    double multNumbers() {
        return num1 * num2;
    }
    
    double divNumbers() {
        return num1 / num2;
    }
    
private:
    double num1;
    double num2;
};

void multiply(Calculator& calc) {
    double n1, n2;
    cout << "Enter two numbers to multiply: ";
    cin >> n1 >> n2;
    calc.setNum1(n1);
    calc.setNum2(n2);
    cout << "The result of " << n1 << " times " << n2 << " is " << calc.multNumbers() << endl;
}

void divide(Calculator& calc) {
    double n1, n2;
    cout << "Enter two numbers to divide: ";
    cin >> n1 >> n2;
    while (n2 == 0) {
        cout << "Cannot divide by zero. Enter a non-zero number: ";
        cin >> n2;
    }
    calc.setNum1(n1);
    calc.setNum2(n2);
    cout << "The result of " << n1 << " divided by " << n2 << " is " << calc.divNumbers() << endl;
}

int main() {
    Calculator calculate;
    char choice;
    do {
        cout << "Choose an operation: (M)to Multiply, (D)to Divide, or (E) to Exit: ";
        cin >> choice;
        switch (choice) {
            case 'M':
            case 'm':
                multiply(calculate);
                break;
            case 'D':
            case 'd':
                divide(calculate);
                break;
            case 'E':
            case 'e':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 'E' && choice != 'e');
    
    return 0;
}
