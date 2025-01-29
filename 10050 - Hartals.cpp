#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--) {
        int days, p;
        int party[3655] = {};
        cin >> days;
        cin >> p;
        for(int i = 0; i < p; i++) {
            int hartal;
            cin >> hartal;
            for(int j = hartal; j <= days; j += hartal) {
                party[j]++;
            }
        }
        int workdayLose = 0;
        for(int i = 1; i <= days; i++) {
            if(party[i] == 0) continue;
            if(i % 7 == 0 || i % 7 == 6) continue;
            workdayLose++;
        }
        cout << workdayLose << endl;
    }
}