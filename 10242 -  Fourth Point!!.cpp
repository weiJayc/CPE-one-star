#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    double x, y;
    while(cin >> x >> y) {
        vector< pair<double, double> > vec;
        vec.push_back({x, y});
        
        for (int i = 0; i < 3; i++) {
            cin >> x >> y;
            vec.push_back({x, y});
        }
        double fourth_x;
        double fourth_y;
        if (vec[1] == vec[2]) {
            fourth_x = vec[1].first + vec[0].first - vec[1].first + vec[3].first - vec[1].first;
            fourth_y = vec[1].second + vec[0].second - vec[1].second + vec[3].second - vec[1].second;
        }
        else if (vec[0] == vec[2]) {
            fourth_x = vec[0].first + vec[1].first - vec[0].first + vec[3].first - vec[0].first;
            fourth_y = vec[0].second + vec[1].second - vec[0].second + vec[3].second - vec[0].second;
        }
        else if (vec[0] == vec[3]) {
            fourth_x = vec[0].first + vec[1].first - vec[0].first + vec[2].first - vec[0].first;
            fourth_y = vec[0].second + vec[1].second - vec[0].second + vec[2].second - vec[0].second;
        }
        else if (vec[1] == vec[3]) {
            fourth_x = vec[1].first + vec[0].first - vec[1].first + vec[2].first - vec[1].first;
            fourth_y = vec[1].second + vec[0].second - vec[1].second + vec[2].second - vec[1].second;
        }
        cout << fixed << setprecision(3) << fourth_x << " " << fourth_y << endl;
    }
    return 0;
}