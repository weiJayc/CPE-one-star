#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--) {
        int m;
        cin >> m;
        
        // b1
        bitset<15> x1(m);
        int b1 = x1.count();
        
        // b2
        string hexStr = to_string(m);
        int b2 = 0;
        for(char c :hexStr) {
            bitset<4> x2bit(c - '0');
            b2 += x2bit.count();
        }
        cout << b1 << " " << b2 << endl;
    }
}