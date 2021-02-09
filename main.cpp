/* Lab 7
 * Clint Scholtisek CS F201 FXA
 * Jon Genetti
 * Takes three inputs and prints them in a line*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
    vector<string> names;
    for (int i = 0; i < 10; i++) {
        string name;
        cout << "Please enter a name: ";
        getline(cin, name);
        names.push_back(name);
    }
    return 0;
}
