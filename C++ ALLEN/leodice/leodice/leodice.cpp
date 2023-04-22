// Leonardo Schneider
// Project 6 - Counting Dice Rolls
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int dieRoll[100];
    int rollChart[6] = {0, 0, 0, 0, 0, 0}; // initialize all elements to 0
    
    // seed the random number generator with the current time
    srand(time(0));
    
    // roll the die 100 times and store the results in dieRoll array
    for (int i = 0; i < 100; i++) {
        dieRoll[i] = rand() % 6 + 1;
        rollChart[dieRoll[i]-1]++; // increment the corresponding rollChart element
    }
    
    // display the results as a bar chart
    for (int i = 0; i < 6; i++) {
        cout << i+1 << ": " << rollChart[i] << " ";
        for (int j = 0; j < rollChart[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

