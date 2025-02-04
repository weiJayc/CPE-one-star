#include <iostream>
using namespace std;
int main()
{
    long long s, d;
    while(cin >> s >> d) {
        while(d > 0) {
            d -= s++;
        }
        cout << s - 1 << endl;
    }

    // 為了紀念我嘗試半天逝去的光陰，我把之前的vector留在這裡...
    // vector<long long> daysTheyCome(44721362); // global
    // long long totalDay = 1;
    // for (int i = 1; i <= 44721361; i++) {
    //     daysTheyCome[i] += totalDay;
    //     totalDay += i;
    // }

    // long long s, d;
    // while(cin >> s >> d) {
    //     d += daysTheyCome[s] - 1;
    //     auto it = upper_bound(daysTheyCome.begin(), daysTheyCome.end(), d);
    //     if(it != daysTheyCome.end()) {
    //         it--;
    //         cout << distance(daysTheyCome.begin(), it) << endl;
    //     }
    // }
}