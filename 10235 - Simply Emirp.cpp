#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    while(cin >> n) {
        if(!isPrime(n)) {
            cout << n << " is not prime." << endl;
            continue;
        }
        string rev = to_string(n);
        reverse(rev.begin(), rev.end());
        int revInt = stoi(rev);
        if(!isPrime(revInt) || revInt == n) {
            cout << n << " is prime." << endl;
        }
        else {
            cout << n << " is emirp." << endl;
        }
    }
}