#include <iostream>
#include <vector>
using namespace std;
void cnt_the_sum(int* arr, int* sum, int pos) {
    for(int i = pos; i >= 0; --i) {
        sum[arr[i] + arr[pos]]++;
    }
}
int main()
{
    int n, c = 1;
    while(cin >> n) {
        int arr[105];
        int sum[20005] = {0};
        bool isB2Sequence = true;
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
            if(arr[i] < 1) isB2Sequence = false;
            cnt_the_sum(arr, sum, i);
            
            if(i == 0) continue;
            if(arr[i] <= arr[i - 1]) {
                isB2Sequence = false;
            }
        }
        for(auto i : sum) { 
            if(i > 1) {
                isB2Sequence = false;
                break;
            }
        }

        if(isB2Sequence) {
            cout << "Case #" << c++ << ": It is a B2-Sequence." << endl;
        }
        else {
            cout << "Case #" << c++ << ": It is not a B2-Sequence." << endl;
        }
        cout << endl;
    }
}