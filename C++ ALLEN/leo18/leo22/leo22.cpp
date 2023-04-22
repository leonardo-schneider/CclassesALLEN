//Leonardo Schneider
// Lab 9 - Creating an Account object using a constructor
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Account {
public:
    Account(std::string accountName, double initialBalance)
    : name{accountName}{
        // validate that initialBalance is greater than 0; if not, keep initial default
        if (initialBalance > 0.0) { // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
        }
    }
    void setName(std::string accountName){
        name = accountName;
    } // end statement block
    
    string getName() const {
        return name; // return name's value to this function's caller
    }
    
    void setBalance(double initialBalance){
        if( initialBalance > 0.0){
            balance = initialBalance;
        }
        else{
            cout << "\nInvalid balance amount!\nBalance not changed." << endl;
        }
    } //end setBalance
    
    double getBalance() const {
        return balance;
    }
private:
    string name; // data member containing account holder's name
    double balance;
}; // end class Account

int main() {
    
    Account myAccount{"Empty Account",0.0};
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    // show that the initial value of myAccount's name is the empty string
    cout << "Initial account name: " << myAccount.getName();
    cout << "\nInitial account balance: $" << myAccount.getBalance();
    cout << "\n\nPlease enter the account name: ";
    string newName;
    getline(cin, newName); // read a line of text
    myAccount.setName(newName); // put newName in myAccount
    
    double balance;
    cout << "\nPlease enter initial balance: ";
    cin >> balance;
    myAccount.setBalance(balance);
    // display the myAccount information
    cout << "\n\t" << myAccount.getName() << " has a balance of $" << myAccount.getBalance() << endl;
    
    return 0;
}
