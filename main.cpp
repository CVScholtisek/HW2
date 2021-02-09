/* HW2
 * Clint Scholtisek CS F201 FXA
 * Jon Genetti
 * Takes three inputs and prints them in a line*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void InputNames(vector<string> & names);

bool DoesNameExist(const string & nameToFind, const vector<string> & names);

int main(int argc, char **argv) {
    vector<string> names;
    string nameToFind;

    InputNames(names);

    cout << "Enter a name to search:";
    cin >> nameToFind;

    DoesNameExist(nameToFind, names);

    return 0;
}

void InputNames(vector<string> & names){
    for (int i = 0; i < 10; i++) {
        string name;
        cout << "Please enter a name:";
        getline(cin, name);
        names.push_back(name);
    }
}

bool DoesNameExist(const string & nameToFind, const vector<string> & names){
    for (int i = 0; i < names.size(); i++){
        if (names[i] == nameToFind) {
            cout << "true";
            return true;
        } else{

        }
    }
    cout << "false";
    return false;
}