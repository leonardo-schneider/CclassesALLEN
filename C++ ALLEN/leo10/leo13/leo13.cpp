// Leonardo Schneider
// Lab 5B – Writing and Reading Files
 #include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <ctime>

 using namespace std;

 void writeFile();
 void readFile();

 int main(void) {
    
     srand(static_cast<unsigned int>(time(0)));
    
     writeFile();
     readFile();
    
     return(0);
     } //end main

 void writeFile(){
     ofstream myFile("someFile.txt", ios::out);
    
     if(!myFile){
         cerr << "File could not be created" << endl;
         exit(EXIT_FAILURE);
         }
     cout << "\nFile opened for writing! \n" << endl;
     cout << "\tWriting to file! \n" << endl;
    
    for (unsigned int counter{1}; counter<=100;counter++)
         {
             myFile << rand() % 100 << "\n";
             }
     myFile.close();
    
     cout << "File has been closed!" << endl;
    
     }
 void readFile(){
     ifstream inSomeFile("someFile.txt", ios::in);
    
     if(!inSomeFile){
         cerr << "File could not be opened" << endl;
         exit(EXIT_FAILURE);
         }
    
     cout << "\nFile opened for reading! \n" << endl;
     cout << "\tReading file contents!\n" << endl;
    
     int someData, dataCounter{1};
     while (inSomeFile >> someData){
         cout.width(4);
         cout << someData;
         if(dataCounter++ % 10 == 0){
             cout << endl;
             }
         }
     cout << "\nFile has been closed!" << endl;
     }
