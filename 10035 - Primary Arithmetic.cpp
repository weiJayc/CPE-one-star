#include <iostream>
using namespace std;
int main()
{
    long long int a, b;

    while(cin >> a >> b, a || b) {
        int cnt = 0;
        int hasCarry = 0;
        while(a != 0 || b != 0) {
            if(a % 10 + b % 10 + hasCarry >= 10) {
                hasCarry  = 1;
                cnt++;
            }
            else {
                hasCarry = 0;
            }
            a /= 10;
            b /= 10;
        }
        if(cnt == 0) {
            cout << "No carry operation." << endl;
        }
        else if(cnt == 1) {
            cout << "1 carry operation." << endl;
        }
        else {
            cout << cnt << " carry operations." << endl;
        }
    }
}