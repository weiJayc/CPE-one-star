#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string n;
    while(cin >> n, n != "0") {
        int oddsum = 0, evensum = 0;
        for(int i = 0; i < n.size(); i++) {
            if(i % 2 == 0) oddsum += n[i] - '0';
            else evensum += n[i] - '0';
        }
        if(abs(oddsum - evensum) % 11 != 0) {
            cout << n << " is not a multiple of 11." << endl;
        }
        else {
            cout << n << " is a multiple of 11." << endl;
        }
    }
}