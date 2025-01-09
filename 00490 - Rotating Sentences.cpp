#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    vector<string> vec;
    string inp;
    int maxlen = 0;
    while(getline(cin, inp)) {
        vec.push_back(inp);
        maxlen = max(maxlen, (int)inp.size());
    }
    for(int i = 0; i < maxlen; ++i) {
        for(int j = vec.size() - 1; j >= 0; --j) {
            if(vec[j].size() - 1 < i) {
                cout << " ";
                continue;
            }
            cout << vec[j][i];
        }
        cout << endl;
    }
}