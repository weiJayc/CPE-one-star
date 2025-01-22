#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
bool cmp(int a, int b) {
    if(a % m != b % m) {
        return a % m < b % m;
    }
    if(a % 2 == 1 && b % 2 == 1) {
        return a > b;
    }
    if(a % 2 == 0 && b % 2 == 0) {
        return a < b;
    }
    return a % 2 > b % 2;
}
int main()
{
    while(cin >> n >> m) {
        if(n == 0 && m == 0) {
            cout << "0 0" << endl;
            break;
        }
        vector<int> vec(n);
        for(int i = 0; i < n; ++i) {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end(), cmp);
        cout << n <<" " << m << endl;
        for(int it : vec) {
            cout << it << endl;
        }
    }
}