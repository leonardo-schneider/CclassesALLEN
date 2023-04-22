//Leonardo Schneider
#include <iostream>

using namespace std;

// Function to get daily sales
void getDailySales(double sales[], int numDays) {
    for (int i = 0; i < numDays; i++) {
        cout << "Enter sales for day " << i+1 << ": ";
        cin >> sales[i];
    }
}

// Function to display total sales and average daily sales
void displayDailySales(double sales[], int numDays) {
    double totalSales = 0.0;
    for (int i = 0; i < numDays; i++) {
        totalSales += sales[i];
    }
    double avgSales = totalSales / numDays;
    cout << "Total sales: $" << totalSales << endl;
    cout << "Average daily sales: $" << avgSales << endl;
}

int main() {
    int numDays;
    cout << "Enter number of days: ";
    cin >> numDays;
    
    // Create dynamic array of size numDays
    double *sales = new double[numDays];
    
    // Call getDailySales to fill in the array
    getDailySales(sales, numDays);
    
    // Call displayDailySales to output total and average sales
    displayDailySales(sales, numDays);
    
    // Free the memory used by the dynamic array
    delete [] sales;
    cout << "Array has been deleted." << endl;
    
    return 0;
}



