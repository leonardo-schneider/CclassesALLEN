// Leonardo Schneier
// Project 5
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void dataInput();
double displayData();
double calcAverage(double, int);

int main()
{
    dataInput();
    
    double avg = displayData();
    
    cout << fixed << setprecision(2);
    cout << "The average value is: " << avg << endl;
    
    return 0;
}

void dataInput()
{
    int num;
    ofstream outFile("myNums.dat");
    
    if (!outFile)
    {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    
    cout << "Enter integers, one at a time (enter a non-integer to stop):" << endl;
    
    while (cin >> num)
    {
        outFile << num << endl;
    }
    
    outFile.close();
    
    cout << "File closed for writing." << endl;
}

double displayData()
{
    int count = 0;
    double sum = 0.0;
    ifstream inFile("myNums.dat");
    
    if (!inFile)
    {
        cout << "Error opening file for reading!" << endl;
        return 0.0;
    }
    
    cout << "File opened for reading:" << endl;
    
    int num;
    while (inFile >> num)
    {
        cout << num << " ";
        
        sum += num;
        count++;
        
        if (count % 5 == 0)
        {
            cout << endl;
        }
    }
    
    inFile.close();
    
    cout << endl << "File closed for reading." << endl;
    
    double avg = calcAverage(sum, count);
    
    return avg;
}

double calcAverage(double sum, int count)
{
    if (count == 0)
    {
        return 0.0;
    }
    
    double avg = sum / count;
    
    return avg;
}

