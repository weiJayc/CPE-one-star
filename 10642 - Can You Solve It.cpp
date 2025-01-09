#include <iostream>
using namespace std;

int main()
{
    long long int arr[200005] = {0};
    for(int i = 1; i < 200005; i++) {
        arr[i] = arr[i - 1] + i;
    }

    int n, cases = 1;
    cin >> n;

    for(int c = 0; c < n; ++c) {
        int startX, startY, endX, endY;
        cin >> startX >> startY >> endX >> endY;

        long long int startStep = arr[startX + startY] + startX;
        long long int endStep = arr[endX + endY] + endX;
        cout << "Case " << cases << ": " << endStep - startStep << endl;
        cases++;
    }
}