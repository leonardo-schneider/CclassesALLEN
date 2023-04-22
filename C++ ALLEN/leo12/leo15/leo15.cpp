//Leonardo Schneider
// Exam 2 Project - Inventory Value Calculation

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// function to input data and write to file
void input_data() {
    ofstream outfile("inventory.txt");
    int quantity;
    double price;
    
    while (true) {
        cout << "Enter item quantity (enter -1 to exit): ";
        cin >> quantity;
        
        if (quantity == -1) {
            break;
        }
        
        cout << "Enter item price: ";
        cin >> price;
        
        outfile << quantity << " " << price << endl;
    }
    
    outfile.close();
}

// function to read data from file and calculate inventory value
double calculate_inventory_value() {
    ifstream infile("inventory.txt");
    int quantity;
    double price, total_cost, grand_total_cost = 0;
    
    cout << setw(10) << "Quantity" << setw(10) << "Price" << setw(15) << "Total Cost" << endl;
    cout << setfill('-') << setw(35) << "" << setfill(' ') << endl;
    
    while (infile >> quantity >> price) {
        total_cost = quantity * price;
        grand_total_cost += total_cost;
        
        cout << setw(10) << quantity << setw(10) << fixed << setprecision(2) << price << setw(15) << total_cost << endl;
    }
    
    infile.close();
    
    cout << "Grand Total Cost: $" << fixed << setprecision(2) << grand_total_cost << endl;
    
    return grand_total_cost;
}

int main() {
    input_data();
    cout << endl;
    calculate_inventory_value();
    
    return 0;
}

