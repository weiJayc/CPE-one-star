#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<char> vec = {
        '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
        'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\\',
        'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'',
        'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'
    };
    
    string str;
    while(getline(cin, str)) {
        string output;
        for(char c : str) {
            c = tolower(c);

            auto it = find(vec.begin(), vec.end(), c);
            if(it != vec.end()) {
                output += *(it - 2);
            }
            else {
                output += " ";
            }
        }
        cout << output << endl;
    }
    return 0;
}