#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        int arr[505];
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int house;
        if(n % 2 == 1) {
            house = arr[n / 2];
        }
        else {
            house = (arr[(n / 2) - 1] + arr[n / 2]) / 2;
        }
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += abs(house - arr[i]);
        }
        cout << sum << endl;
    }
}