#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int x;
    while (cin >> x) {
        cin.ignore();
        string coef;
        getline(cin, coef);

        stringstream ss(coef);
        vector<int> coefArr;
        int num;
        while (ss >> num) {
            coefArr.push_back(num);
        }
        coefArr.pop_back();
        reverse(coefArr.begin(), coefArr.end());

        int result = 0;
        int mul = 1;
        for(int power = 0; power < coefArr.size(); power++) {
            result += coefArr[power] * (power + 1) * mul;
            mul *= x;
        }
        cout << result << endl;
    }
}