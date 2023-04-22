// Leonardo Schneider
// Project 2 sales comission calculator\

#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;


int menu;
int main()
{
    double hours= 0.0;
    double payRate= 0.0;
    double sale = 0.0;
    int regularPay = 0.0;
    double commission = 0.0;
    double overallPay = 0.0;
    int regularPaysecond = 0.0;
    double commissionsecond = 0.0;
    double overallPaysecond = 0.0;
    double v = 0.10;
    double payRoll = 0.0;
    double payOut = 0.0;
    
    
    
    while(menu != 3){
        
        cout<<"1.Enter sales commission percent"<<endl;
        cout<<"2.Calculate Employee Salary"<<endl;
        cout<<"3.Exit program"<<endl;
        cout<<"The sale commission percentage is 10%"<<endl;
        cout<< "The Current sales commission rate is: 0.00"<< endl;
        cin>> menu;

        switch (menu){
            case 1:
                cout<< "Enter hours worked[xx.yy]: ";
                cin>> hours;
                cout<< "Enter paying rage [xx.yy]: ";
                cin>> payRate;
                cout<< "Enter your total sales [xx.yy]: ";
                cin>> sale;
                
                if(payRate <= 0){
                    cout<<"No salaries displayed"<<endl;
                    return 0;
                }
                
                regularPay = hours * payRate;
                
                commission = v * sale;
                
                overallPay = commission + regularPay;
                
                cout<< "Employee's Total Salary is:"<< regularPay<<endl;
                cout<< "Employee's Total comission is: "<< commission<<endl;;
                cout<< "Employee's Total amount is :"<<overallPay<<endl;
                break;
                
            case 2:
                cout<< "Enter hours worked[xx.yy]: ";
                cin>> hours;
                cout<< "Enter paying rage [xx.yy]: ";
                cin>> payRate;
                cout<< "Enter your total sales [xx.yy]: ";
                cin>> sale;
             
                regularPaysecond = hours * payRate;
                
                commissionsecond = v * sale;
                
                overallPaysecond = commissionsecond + regularPaysecond;
                
                cout<< "Employee's Total Salary is:"<< regularPaysecond<<endl;
                cout<< "Employee's Total comission is: "<< commissionsecond<<endl;;
                cout<< "Employee's Total amount is :"<<overallPaysecond<<endl;
                break;
                
                
            case 3:
                payRoll = overallPay + overallPaysecond;
                payOut = (commission + commissionsecond) / 2;
                
                if (payRoll <= 0){
                    cout<<"No salaries processed"<<endl;
                }
                else{
                
                cout<< "The total Payroll is: "<< payRoll<< endl;
                cout<< "The average Payout is:"<< payOut<< endl;
                }
                break;
        }
    }
        return 0;
    
        }
