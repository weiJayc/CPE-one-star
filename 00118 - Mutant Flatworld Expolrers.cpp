#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

vector< pair<int, int> > directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
map<char, int> dir_to_num = {{'N', 0}, {'E', 1}, {'S', 2}, {'W', 3}};
map<int, char> num_to_dir = {{0, 'N'}, {1, 'E'}, {2, 'S'}, {3, 'W'}};

class Robot {
    private:
        static vector< vector<bool> > scent;
        int x, y, dir;
        int rows, cols;

    public:
        Robot(int x, int y, char dir, int n, int m) : x(x), y(y), rows(n), cols(m) {    
            this -> dir = dir_to_num[dir];
        }
        bool move(char c) {
            if(c == 'F') {
                int nx = x + directions[dir].first, ny = y + directions[dir].second;

                // out of range
                if(nx < 0 || ny < 0 || nx > rows || ny > cols) {
                    if(scent[x][y]) {
                        return true;
                    }
                    scent[x][y] = true;
                    return false;
                }
                x = nx;
                y = ny;
            }
            else if(c == 'L') {
                dir = (dir + 3) % 4;
            }
            else if(c == 'R') {
                dir = (dir + 1) % 4;
            }
            return true;
        }
        int getX() { return x; }
        int getY() { return y; }
        char getDir() { return num_to_dir[dir]; }
};

vector< vector<bool> > Robot::scent(55, vector<bool>(55, false));

int main() {
    int n, m, posx, posy;
    char dir;
    string instructions;

    cin >> n >> m;
    while(cin >> posx >> posy >> dir) {
        Robot robot(posx, posy, dir, n, m);
        cin >> instructions;

        bool isLost = false;
        for(char c : instructions) {
            if(!robot.move(c)) {
                isLost = true;
                break;
            }
        }

        cout << robot.getX() << " " << robot.getY() << " " << robot.getDir();
        if(isLost) cout << " LOST";
        cout << endl;
    }
    return 0;
}