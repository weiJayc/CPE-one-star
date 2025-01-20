#include <iostream>
#include <string>
using namespace std;
int main()
{
    string inp;
    int state = 0;
    while(getline(cin, inp)) {
        for(auto i : inp) {
            if(i != '"') {
                cout << i;
                continue;
            }
            if(state == 0) {
                cout << "``";
                state = 1;
            }
            else {
                cout << "''";
                state = 0;
            }
        }
        cout << endl;
    }
}