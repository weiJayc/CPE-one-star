#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Robot {
    private:
        vector< pair<int, int> > directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        map<char, int> dir_to_num = {{'N', 0}, {'E', 1}, {'S', 2}, {'W', 3}};
        map<int, char> num_to_dir = {{0, 'N'}, {1, 'E'}, {2, 'S'}, {3, 'W'}};
        static multimap< pair<int, int>, int > scent;
        int x, y, dir;
        int rows, cols;

    public:
        Robot(int x, int y, char dir, int n, int m) {
            this -> x = x;
            this -> y = y;
            this -> dir = dir_to_num[dir];
            rows = n;
            cols = m;
        }
        bool move(char c) {
            if(c == 'F') {
                int nx = x + directions[dir].first, ny = y + directions[dir].second;

                // out of range
                if(nx < 0 || ny < 0 || nx > rows || ny > cols) {
                    auto range = scent.equal_range({x, y});
                    for(auto item = range.first; item != range.second; ++item) {
                        return true
                        if(item -> second == dir) {
                            return true;
                        }
                    }
                    scent.insert({{x, y}, dir});
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

multimap< pair<int, int>, int > Robot::scent;

int main()
{
    int n, m, posx, posy;
    char dir;
    
    cin >> n >> m;
    while(cin >> posx >> posy >> dir) {
        Robot robot(posx, posy, dir, n, m);
        string instructions;
        cin >> instructions;

        bool isLost = false;
        for(char c : instructions) {
            if(!robot.move(c)) {
                isLost = true;
                break;
            }
        }
        if(isLost) {
            cout << robot.getX() << " " << robot.getY() << " " << robot.getDir() << " LOST" << endl;
        }
        else {
            cout << robot.getX() << " " << robot.getY() << " " << robot.getDir() << endl;
        }
    }
}