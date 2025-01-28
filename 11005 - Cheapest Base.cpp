#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int evaluateCost(int* characterCost, int num, int base);
bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main()
{
    int c;
    cin >> c;
    for(int cases = 1; cases <= c; cases++) {
        if(cases != 1) cout << endl;
        cout << "Case " << cases << ":" << endl;

        int characterCost[36];
        for(int i = 0; i < 36; ++i) {
            cin >> characterCost[i];
            // characterCost[i] = 1;
        }

        int n;
        cin >> n;
        while(n--) {
            vector< pair<int, int> > miniVec;
            int numbers;
            cin >> numbers;
            for(int base = 2; base <= 36; base++) {
                miniVec.push_back({base, evaluateCost(characterCost, numbers, base)});
            }
            sort(miniVec.begin(), miniVec.end(), cmp);

            cout << "Cheapest base(s) for number " << numbers << ":";
            for(int i = 0; i < miniVec.size(); i++) {
                if(miniVec[i].second != miniVec[0].second) break;
                cout << " " << miniVec[i].first;
            }
            cout << endl;
        }
        
    }
}

int evaluateCost(int* characterCost, int num, int base) {
    int totalCost = 0;
    while(num != 0) {
        totalCost += characterCost[num % base];
        num /= base;
    }
    return totalCost;
}