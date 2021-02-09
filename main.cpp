/* HW2
 * Clint Scholtisek CS F201 FXA
 * Jon Genetti
 * Takes ten name inputs and lets you serach for a specific name, prints the list as a whole,
 * and counts the length of each name*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// function prototypes

void InputNames(vector<string> & names);
bool DoesNameExist(const string & nameToFind, const vector<string> & names);
void PrintNames(const vector<string> & names);
void NameCount(const vector<string> & names);

// main function

int main(int argc, char **argv) {
    vector<string> names;
    string nameToFind;

    InputNames(names);

    cout << "Enter a name to search:";
    cin >> nameToFind;

    DoesNameExist(nameToFind, names);

    PrintNames(names);

    NameCount(names);

    return 0;
}

// Gets input for names vector

void InputNames(vector<string> & names){
    for (int i = 0; i < 10; i++) {
        string name;
        cout << "Please enter a name:";
        getline(cin, name);
        names.push_back(name);
    }
}

// Checks if name exists in names vector and returns boolean value

bool DoesNameExist(const string & nameToFind, const vector<string> & names){
    for (int i = 0; i < names.size(); i++){
        if (names[i] == nameToFind) {
            cout << "true" << endl;
            return true;
        } else{

        }
    }
    cout << "false" << endl;
    return false;
}

// Prints names list

void PrintNames(const vector<string> & names){
    cout << "Names List:" << endl;
    for (int i = 0; i < names.size(); i++){
        cout << names[i] << endl;
    }
}

// Counts length of each name

void NameCount(const vector<string> & names){
    for (int i = 0; i < names.size(); i++){
        cout << names[i] << " is " << names[i].length() << " characters long" << endl;
    }
}