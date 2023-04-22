// Leonardo Schneider
// Lab 4 – Calculating and modifying Hypotenuse
 #include <iostream>
 #include <cmath>
 #include <iomanip>

 using namespace std;

 double hypotenuse(double a, double b);
 void modifyHyp(double&);

 int main()
 {
     double sideA, sideB, hyp;
    
     cout << fixed << setprecision(1);
     cout << "\nEnter first side(-1 to quit): ";
     cin >> sideA;
    
     while (sideA != -1){
         cout << "\nEnter second side: ";
         cin >> sideB;
        
         hyp = hypotenuse(sideA,sideB); // function call using call-by-value
        
         cout << "\nThe hypotenuse of " << sideA << " and " << sideB << " is " << hyp << endl;
        
         modifyHyp(hyp); // function call using call-by-reference
        
         cout << "\nOne hundred added to the hypotenuse is: " << hyp << endl;
        
         cout << "\nEnter first side (-1 to quit): ";
         cin >> sideA;
         }
     return 0;
     }
     double hypotenuse(double a, double b){
        
          double sideC = (sqrt((a*a)+(b*b)));
        
         return(sideC);
         }
    void modifyHyp(double& val){ // passes the *address* of hyp into val
        
        val += 100;
         }
