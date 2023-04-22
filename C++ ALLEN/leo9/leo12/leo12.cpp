// Leonardo Schneider
// Lab 5 – File Input and Manipulators
 #include <iostream> // used for .get operations
 #include <fstream> // used for file input/output
 #include <cstdlib> // used for exit statement

 using namespace std;
 ifstream inFile;

 int main()
 {
     int choice{0};
    
     cout << "Program to read characters from a file and display in UPPER or lower formats." << endl;
     cout << "\nPlease select from the following menu."
     << "\n1. Convert to ALL CAPS"
     << "\n2. Convert to a lowercase"
     << "\n3. Exit program"
     << "\n\nSelection: " ;
     cin >> choice;
     while (choice != 3){
        
         switch (choice){
                 case 1:
                 inFile.open("RedDevils.txt");
                 if(inFile.fail()){
                     cout << "File input failed.";
                     exit(1);
                     }
                 else {
                     while (!inFile.eof()){
                         char symbol;
                         inFile.get(symbol);
                         symbol=toupper(symbol);
                         cout << symbol ;
                         }
                     }
                 break;
                 case 2:
                 inFile.open("RedDevils.txt");
                 if(inFile.fail()){
                     cout << "File input failed.";
                     exit(1);
                     }
                 else {
                     while (!inFile.eof()){
                         char symbol;
                         inFile.get(symbol);
                        symbol=tolower(symbol);
                         cout << symbol ;
                         }
                     }
                 break;
                 default:
                 cout << "\nNot a valid menu selection. No action has been taken.\n\n";
             }
         inFile.close();
        
         cout << "Selection please: ";
         cin >> choice;
         }
     return 0;
     }
