#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;
    vector<char> fullName;
    
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    
    // Concatenate the first and last name to form the full name
    fullName.insert(fullName.end(), firstName.begin(), firstName.end());
    fullName.push_back(' ');  // Add a space between the first and last name
    fullName.insert(fullName.end(), lastName.begin(), lastName.end());
    
    // Display what the user entered
    cout << "You entered: " << firstName << " " << lastName << endl;
    
    // Display their name with a space between each letter
    cout << "Name with space between each letter: ";
    for (char c : fullName) {
        cout << c << " ";
    }
    cout << endl;
    
    // Display their name spelled backwards in all capital letters
    cout << "Name spelled backwards in all capital letters: ";
    transform(fullName.rbegin(), fullName.rend(), ostream_iterator<char>(cout), [](char c) {
        return toupper(c);
    });
    cout << endl;
    
    // Display their name spelled backwards in all lowercase letters
    cout << "Name spelled backwards in all lowercase letters: ";
    transform(fullName.rbegin(), fullName.rend(), ostream_iterator<char>(cout), [](char c) {
        return tolower(c);
    });
    cout << endl;
    
    // Display a message to have a good day using their first name
    cout << "Have a good day, " << firstName << "!" << endl;
    
    return 0;
}


