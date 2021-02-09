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

int main(int argc, char **argv) {
    vector<string> names;
    InputNames(names);
    return 0;
}

void InputNames(vector<string> & names){
    for (int i = 0; i < 10; i++) {
        string name;
        cout << "Please enter a name: ";
        getline(cin, name);
        names.push_back(name);
    }
}
