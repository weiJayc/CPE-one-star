#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    cin.ignore();
    while(t--) {
        string treeName;
        map<string, int> species;
        int totalTree = 0;
        while(getline(cin, treeName)) {
            if(treeName.empty()) break;

            species[treeName]++;
            totalTree++;
        }
        
        for(auto name : species) {
            cout << fixed << setprecision(4) << name.first << " " << ( (float)name.second / totalTree ) * 100 << endl;
        }
        if(t) puts("");
    }
}