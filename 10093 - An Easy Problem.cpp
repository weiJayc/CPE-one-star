#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string str;
    while(cin >> str) {
        int sum = 0, minBase = 1;
        int temp; // for getting minBase
        for(char it : str) {
            if(it >= '0' && it <= '9') {
                temp = it - '0';
            }
            else if(it >= 'A' && it <= 'Z') {
                temp = it - 'A' + 10;
            }
            else if(it >= 'a' && it <= 'z') {
                temp = it - 'a' + 36;
            }
            else {
                continue;
            }
            if(minBase < temp) {
                minBase = temp;
            }
            sum += temp;
        }
        minBase++;
        bool isDivided = false;
        for(int properBase = minBase; properBase <= 62; properBase++) {
            if(properBase == 1) continue;
            // cout << "Decimal Value: " << dec << endl; // Debug statement
            if(sum % (properBase - 1) == 0) {
                cout << properBase << endl;
                isDivided = true;
                break;
            }
        }
        if(!isDivided) {
            cout << "such number is impossible!" << endl;
        }
    }
    return 0;
}
