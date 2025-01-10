#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b)
{
    if(a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second > b.second;
    }
}
int main()
{
    vector< pair<char, int> > vec;
    for(int i = 0; i < 26; i++) {
        vec.push_back({'A' + i, 0});
    }
    int n;
    cin >> n;
    cin.ignore();
    for(int k = 0; k < n; ++k) {
        string str;
        getline(cin, str);
        for(int i = 0; i < str.size(); ++i) {
            str[i] = toupper(str[i]);
            if(str[i] >= 'A' && str[i] <= 'Z') {
                vec[str[i] - 'A'].second++;
            } 
        }
    }
    sort(vec.begin(), vec.end(), cmp);
    for(auto i : vec) {
        if(i.second == 0) continue;
        cout << i.first << " " << i.second << endl;
    }
}