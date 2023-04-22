// Leonardo Schneider
//Lab_6A_sumRandomNumbers

#include <iostream>
#include <iomanip>
#include <ctime>
#include <array>

using namespace std;

int main()
{
    int randNums[10], sumNums{0}, counter{0};
    
    srand(static_cast<unsigned int>(time(0)));
    
    for(unsigned int i{0} ; i < 10 ; i++){
        randNums[i]= rand() % 100; // get number from 0 to 100
        sumNums += randNums[i];
    }
    
    for(unsigned int i{0} ; i < 10 ; i++){
        cout << setw(10) << randNums[i] ;
        counter++;
        if(counter %5 == 0){
            cout << endl;
        }
        }
        cout << "\nThe sum of the random numbers is: " << sumNums << endl;
    
        return 0;
        }
