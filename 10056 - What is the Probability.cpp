#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
        long double people, p, s;
        cin >> people >> p >> s;
        if(p == 0) cout << "0.0000" << endl;
        else cout << fixed << setprecision(4) << ( p * pow(1 - p, s - 1) ) / (1 - pow(1 - p, people)) << endl;
    }
}