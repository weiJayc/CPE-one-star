#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b, a != 0 && b != 0) {
        int cnt = 0;
        for(float i = a; i <= b; ++i) {
            if((int)sqrt(i) == sqrt(i)) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}