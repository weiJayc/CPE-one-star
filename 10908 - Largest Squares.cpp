#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

bool expand(vector< vector<char> >& board, vector< vector<bool> >& visited, queue< pair<int, int> >& pointQueue) {
    // 確認現在queue裡面的所有點是不是能夠向周圍所有方向擴張
    // 如果可以，就把擴張的所有點全部替換到queue裡面，將這些點當成下次擴張的基礎，回傳true
    // 如果不行，說明擴張失敗，回傳false
    vector< pair<int, int> > directions{
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1}, {0, 1},
        {1, -1}, {1, 0}, {1, 1}
    };

    queue< pair<int, int> > nextQueue;
    while(!pointQueue.empty()) {
        int cx = pointQueue.front().first, cy = pointQueue.front().second;
        pointQueue.pop();
    
        for(auto dir : directions) {
            int nx = cx + dir.first, ny = cy + dir.second;
            if(nx < 0 || ny < 0 || nx >= board.size() || ny >= board[0].size()) {
                return false;
            }
            if(visited[nx][ny]) continue;
            if(board[cx][cy] != board[nx][ny]) {
                return false;
            }
            visited[nx][ny] = true;
            nextQueue.push({nx, ny});
        }
    }
    pointQueue = nextQueue;
    return true;
} 
int largestSquares(int x, int y, vector< vector<char> >& board) {
    int n = board.size(), m = board[0].size();
    vector< vector<bool> > visited(n, vector<bool>(m, false));
    queue< pair<int, int> > pointQueue;

    pointQueue.push({x, y});
    visited[x][y] = true;

    int squareSize = 1;
    while(expand(board, visited, pointQueue)) {
        squareSize += 2;
    }
    return squareSize;
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, m, question;
        cin >> n >> m >> question;
        vector< vector<char> > board(n, vector<char>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> board[i][j];
            }
        }

        cout << n << " " << m << " " << question << endl;
        int x, y;
        for(int i = 0; i < question; i++) {
            cin >> x >> y;
            cout << largestSquares(x, y, board) << endl;
        }
    }
}