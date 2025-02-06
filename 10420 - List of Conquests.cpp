#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    map<string, int> woman;
    string country, name;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> country;
        getline(cin, name);
        woman[country]++;
    }
    for(auto it : woman) {
        cout << it.first << " " << it.second << endl;
    }
}