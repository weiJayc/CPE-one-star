#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int cases = 1; cases <= t; cases++) {
        int n;
        string temp;
        cin >> temp >> temp >> n;
        long long arr[105][105] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        bool isSymmertic = true;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - i; j++) {
                if(arr[i][j] < 0) {
                    isSymmertic = false;
                }
                if(arr[i][j] != arr[n - i - 1][n - j - 1]) {
                    isSymmertic = false;
                }
            }
        }
        if(isSymmertic) {
            cout << "Test #" << cases << ": Symmetric." << endl;
        }
        else {
            cout << "Test #" << cases << ": Non-symmetric." << endl;
        }
    }
}