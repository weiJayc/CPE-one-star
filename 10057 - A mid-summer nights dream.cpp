#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n) {
        vector<int> vec(n);
        for(int i = 0; i < n; ++i) {
            cin >> vec[i];
        }       
        sort(vec.begin(), vec.end());
        if(n % 2 == 0) {
            int mid1 = vec[n / 2];
            int mid2 = vec[(n / 2) - 1];
            
            int cnt = 0;
            for(auto i : vec) {
                if(i == mid2 || i == mid1) cnt++;
            }

            if(mid1 != mid2) {
                cout << mid2 << " " << cnt << " " << mid1 - mid2 + 1 << endl;
            }
            else {
                cout << mid2 << " " << cnt << " 1" << endl;
            }
        }
        else {
            int mid = vec[n / 2];
            
            int cnt = 0;
            for(auto i : vec) {
                if(i == mid) cnt++;
            }
            cout << mid << " " << cnt << " 1" << endl;
        }
    }
}