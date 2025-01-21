#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(1);
    for(int i = 2; i <= 40; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }    

    int n;
    cin >> n;
    for(int k = 1; k <= n; k++) {
        int dec;
        cin >> dec;
        cout << dec << " = ";

        bool isFind = false;
        for(int i = fib.size() - 1; i > 0; i--) {
            if(!isFind && fib[i] > dec) {
                continue;
            }
            isFind = true;
            if(fib[i] > dec) {
                cout << "0";
            }
            else {
                cout << "1";
                dec -= fib[i];
            }
        }
        cout << " (fib)" << endl;
    }
}