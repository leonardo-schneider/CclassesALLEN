// Leonardo Schneider
// Lab 3A – Random Die Roll
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    unsigned int seed{0};
    
    //cout << "Enter seed: ";
    //cin >> seed;
    //srand(seed);
    
    srand(static_cast<unsigned int>(time(0)));
    for(unsigned int outerLoop{1}; outerLoop <=5; ++outerLoop){
        for (unsigned int counter{1}; counter <= 10; ++counter) { cout << setw(10) << (1 + rand() % 6);
            if (counter % 5 == 0){ cout << endl;
            } }
        cout << endl;
    }// end outer loop
    return 0; }
