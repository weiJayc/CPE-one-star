#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n;
    while(cin >> n, n != 0) {
        bitset<31> bs(n);
        string str = bs.to_string();
        size_t index = str.find_first_not_of('0');
        if(index != string::npos) {
            str = str.substr(index);
        }
        cout << "The parity of " << str << " is "<< bs.count() << " (mod 2)." << endl;
    }
}