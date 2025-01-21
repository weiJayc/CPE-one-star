#include <iostream>
using namespace std;
int main()
{
    string n;
    while(cin >> n, n != "0") {
        int sum = 0;
        int degree = 1;
        for(int i = 0; i < n.size(); ++i) {
            sum += n[i] - '0';
        }
        if(sum % 9 != 0) {
            cout << n << " is not a multiple of 9." << endl;
            continue;
        }
        while(sum >= 10) {
            int temp = 0;
            while(sum != 0) {
                temp += sum % 10;
                sum /= 10;
            }
            sum = temp;
            degree++;
        }
        cout << n << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
    }
}