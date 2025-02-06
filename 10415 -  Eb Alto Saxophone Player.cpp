#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    map< char, vector<int> > fingering = {
        {'c', {2, 3, 4, 7, 8, 9, 10}},
        {'d', {2, 3, 4, 7, 8, 9}},
        {'e', {2, 3, 4, 7, 8}},
        {'f', {2, 3, 4, 7}},
        {'g', {2, 3, 4}},
        {'a', {2, 3}},
        {'b', {2}},
        {'C', {3}},
        {'D', {1, 2, 3, 4, 7, 8, 9}},
        {'E', {1, 2, 3, 4, 7, 8}},
        {'F', {1, 2, 3, 4, 7}},
        {'G', {1, 2, 3, 4}},
        {'A', {1, 2, 3}},
        {'B', {1, 2}}
    };
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        bool nowPress[11] = {false};
        int pressCnt[11] = {};
        string song;
        getline(cin, song);
        for(char notes : song) {
            for(int i = 1; i <= 10; i++) {
                auto toPress = find(fingering[notes].begin(), fingering[notes].end(), i);
                if(toPress != fingering[notes].end() && !nowPress[i]) {
                    pressCnt[i]++;
                    nowPress[i] = true;
                }
                else if(toPress == fingering[notes].end() && nowPress[i]) {
                    nowPress[i] = false;
                }
            }
        }
        for(int i = 1; i <= 10; i++) {
            if(i != 1) cout << " ";
            cout << pressCnt[i];
        }
        cout << endl;
    }
}