#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long sum, absolute;
        cin >> sum >> absolute;
        long long large = (sum + absolute) / 2;
        long long small = sum - large;
        if(small < 0 || large - small != absolute) {
            cout << "impossible" << endl;
        }
        else {
            cout << large << " " << small << endl;
        }
    }
}