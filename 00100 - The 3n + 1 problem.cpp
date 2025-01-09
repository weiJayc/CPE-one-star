#include <iostream>
#include <cmath>
using namespace std;

int foo(int num, int cycleLen);

int main()
{
    int n, m;
    while(cin >> n >> m) {
        int maxlen = 0;
        cout << n << " " << m << " ";

        if(n > m) {
            swap(n, m);
        }
        
        for(int i = n; i <= m; ++i) {
            maxlen = max(maxlen, foo(i, 1));
        }
        cout << maxlen << endl;
    }
}

int foo(int num, int cycleLen) 
{
    if(num == 1) return cycleLen;
    if(num % 2 == 1) {
        return foo(3 * num + 1, cycleLen + 1);
    }
    else {
        return foo(num / 2, cycleLen + 1);
    }
}