#include <iostream>
using namespace std;
int main()
{
    int step;
    while(cin >> step, step != 0) {
        cin.ignore();
        int die[6] = {2, 1, 5, 6, 3, 4}; // {N, top, S, btm, W, E}
        while(step--) {
            string command;
            cin >> command;
            if(command == "north") {
                int tmp = die[0];
                die[0] = die[1];
                die[1] = die[2];
                die[2] = die[3];
                die[3] = tmp;
            }
            else if(command == "south") {
                int tmp = die[0];
                die[0] = die[3];
                die[3] = die[2];
                die[2] = die[1];
                die[1] = tmp;
            }
            else if(command == "east") {
                int tmp = die[1];
                die[1] = die[4];
                die[4] = die[3];
                die[3] = die[5];
                die[5] = tmp; 
            }
            else if(command == "west") {
                int tmp = die[1];
                die[1] = die[5];
                die[5] = die[3];
                die[3] = die[4];
                die[4] = tmp;
            }
        }
        cout << die[1] << endl;
        
    }
}