#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n, n != 0) {
        while(n >= 10) {
            int digitSum = 0;
            while(n != 0) {
                digitSum += n % 10;
                n /= 10;
            }
            n = digitSum;
        }
        cout << n << endl;
    }
}