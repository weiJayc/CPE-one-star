#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    while(cin >> n) {
        int num[3005];
        int arr[3000] = {0};
        bool isJolly = true;
        
        for(int i = 0; i < n; i++) {
            cin >> num[i];
        }
        for(int i = 0; i < n - 1; i++) {
            arr[abs(num[i] - num[i + 1])]++;
        }
        for(int i = 1; i <= n - 1; i++) {
            if(arr[i] != 1) {
                cout << "Not jolly" << endl;
                isJolly = false;
                break;
            }
        }
        if(isJolly) {
            cout << "Jolly" << endl;
        }
    }
}