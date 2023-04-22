// Leonardo Schneider
// Lab 3B Maximum function with a function prototype.
 #include <iostream>
 #include <iomanip>

 using namespace std;

 int maximum(int x, int y, int z); // function prototype

 int main() {
     cout << "Enter three integer values separated by a space: ";
     int num1, num2, num3;
     cin >> num1 >> num2 >> num3;
    
     // invoke maximum
     cout << "The maximum integer value is: "
     << maximum(num1, num2, num3) << endl;
     }

 // returns the largest of three integers
 int maximum(int x, int y, int z) {
     int maximumValue{x}; // assume x is the largest to start
    
     if (y > maximumValue) { // if true, make y the new maximumValue
         maximumValue = y;
         }
    
     if (z > maximumValue) { // if true, make z the new maximumValue
         maximumValue = z;
         }
    
     return maximumValue;
     }
