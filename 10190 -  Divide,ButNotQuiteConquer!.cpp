#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    while(cin >> n >> m) {
        vector<int> vec;
        if(m <= 1 || n <= 1) {
            cout << "Boring!" << endl;
            continue;
        }
        while(n % m == 0) {
            vec.push_back(n);
            n /= m;
        }
        if(vec.empty() || vec.back() != m) {
            cout << "Boring!" << endl;
        }
        else {
            for(auto i : vec) {
                cout << i << " ";
            }
            cout << "1" << endl;
        }
    }
}