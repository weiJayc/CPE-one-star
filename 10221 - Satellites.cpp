#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a, s;
    string str;
    while(cin >> s >> a >> str) {
        if(str == "min") {
            a /= 60.0;
        }
        double degree = fmod(a, 360);
        if(degree > 180) degree = 180 - fmod(degree, 180);
        double radian = degree * (M_PI / 180.0);
        double distance = s + 6440.0;
        cout << fixed << setprecision(6) << radian * distance << " " << sqrt(2 * distance * distance - 2 * distance * distance * cos(radian)) << endl;
        
    }
}