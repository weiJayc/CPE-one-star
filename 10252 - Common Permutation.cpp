#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    string stra, strb;
    while(getline(cin, stra)) {
        getline(cin, strb);
        if(stra.empty() || strb.empty()) {
            puts("");
            continue;
        }
        vector<int> veca(26), vecb(26);
        for(char c : stra) {
            veca[c - 'a']++;
        }
        for(char c : strb) {
            vecb[c - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            int charNum = min(veca[i], vecb[i]);
            while(charNum--) {
                putchar(i + 'a');
            }
        }
        cout << endl;
    }
}