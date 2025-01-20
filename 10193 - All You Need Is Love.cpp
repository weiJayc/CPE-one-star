#include <iostream>
#include <bitset>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
    int n;
    cin >> n;
    for(int cases = 1; cases <= n; ++cases) {
        string str1, str2;
        cin >> str1 >> str2;
        bitset<30> bs1(str1), bs2(str2);
        unsigned long long n1 = bs1.to_ullong();
        unsigned long long n2 = bs2.to_ullong();
        if(gcd(n1, n2) != 1) {
            cout << "Pair #" << cases << ": All you need is love!" << endl;
        }
        else {
            cout << "Pair #" << cases << ": Love is not all you need!" << endl;
        }
    }
}