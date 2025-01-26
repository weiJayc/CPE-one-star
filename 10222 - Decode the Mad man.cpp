#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector< vector<char> > vec = {
        {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='},
        {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\\'},
        {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\''},
        {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}
    };
    
    string str;
    while(getline(cin, str)) {
        string output;
        for(char& c : str) {
            c = tolower(c);
        }
        for(char c : str) {
            if(c == ' ') {
                output += " ";
                continue;
            }
            for(auto& j : vec) {
                auto it = find(j.begin(), j.end(), c);
                if(it != j.end()) {
                    output += *(it - 2);
                }
            }
        }
        cout << output << endl;
    }
    return 0;
}