#include <iostream>
using namespace std;
int main()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string weeks[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int t;
    cin >> t;
    while(t--) {
        int month, day, week = 5;
        int dayPass = 0;
        cin >> month >> day;
        for(int i = 0; i < month - 1; i++) {
            dayPass += months[i];
        }
        dayPass += day;
        week = (week + dayPass) % 7;
        cout << weeks[week] << endl;
    }
}