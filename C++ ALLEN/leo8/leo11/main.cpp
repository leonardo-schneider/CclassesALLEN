// Leonardo Schneider
// Project 4 - Calling functions
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void displayNumber(int num);
void doubleNumber(int &num);
void squareNumber(int &num);

int main() {
    int myNum;
    
    while (true) {
        cout << "Enter an integer (-1 to exit): ";
        cin >> myNum;
        
        if (myNum == -1) {
            break;
        }
        
        displayNumber(myNum);
        
        doubleNumber(myNum);
        cout << "myNum is now " << myNum << endl;
        
        squareNumber(myNum);
        cout << "myNum is now " << myNum << endl;
    }
    
    return 0;
}

void displayNumber(int num) {
    cout << "myNum is now" << num << endl;
}

void doubleNumber(int& num) {
    num *= 2;
}

void squareNumber(int& num) {
    num *= num;
}


