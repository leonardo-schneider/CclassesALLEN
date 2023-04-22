// Leonardo Schneider
// Project 3

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    const int NUM_VALUES = 3;
    int values[NUM_VALUES];
    int getSum = 0;
    unsigned int seed{0};
    srand(static_cast<unsigned int>(time(0)));
    
    for(unsigned int outerLoop{1}; outerLoop <=1; ++outerLoop){
        for (unsigned int counter{1}; counter <= NUM_VALUES; ++counter) {
            values[counter - 1] = 1 + rand() % 99;
            cout << setw(3) << values[counter - 1];
            getSum += values[counter - 1];
            if (counter % 3 == 0){
                cout << endl;
            }
        }
    }
    
    
    int getMax = values[0];
    int getMin = values[0];
    for (int i = 1; i < NUM_VALUES; i++) {
        if (values[i] > getMax) {
            getMax = values[i];
        }
        if (values[i] < getMin) {
            getMin = values[i];
        }
    }
    double getAvg = static_cast<double>(getSum) / NUM_VALUES;
    
    
    cout << "Highest value: " << getMax << endl;
    cout << "Lowest value: " << getMin <<endl;
    cout << "The sum is: " << getSum << endl;
    cout << " The average is: " << getAvg << endl;
    
    return 0;
}



