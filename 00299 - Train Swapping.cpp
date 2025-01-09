#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int k = 0; k < n; ++k) {
        int arr[50];
        int len;
        cin >> len;
        for(int j = 0; j < len; j++) {
            cin >> arr[j];
        }

        int swapTimes = 0;
        for(int i = 0; i < len - 1; ++i) {
            for(int j = 0; j < len - 1; ++j) {
                if(arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapTimes++;
                }
            }
        }
        cout << "Optimal train swapping takes " << swapTimes << " swaps." << endl;
    }
}