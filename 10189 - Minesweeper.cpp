#include <iostream>
#include <vector>
using namespace std;

void updateGraph(vector< vector<int> >& boomArr, int row, int col);

int main()
{
    int n, m, cnt = 1;
    while(cin >> n >> m, n != 0 && m != 0) {
        cin.ignore();
        vector< vector<int> > boomArr(n, vector<int>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                char c;
                cin >> c;
                if(c == '*') {
                    boomArr[i][j] = -10;
                    updateGraph(boomArr, i, j);
                }
            }
            cin.ignore();
        }
        
        if(cnt != 1) cout << endl;
        cout << "Field #" << cnt++ << ":" << endl;
        for(auto itvec : boomArr) {
            for(auto it : itvec) {
                if(it < 0) {
                    cout << "*";
                } 
                else {
                    cout << it;
                }
            }
            cout << endl;
        }
    }
}

void updateGraph(vector< vector<int> >& boomArr, int row, int col)
{
    int rowEdge = boomArr.size();
    int colEdge = boomArr[0].size();

    for(int i = -1; i <= 1; i++) {
        for(int j = -1; j <= 1; j++) {
            if(row + i < 0 || row + i >= rowEdge) continue;
            if(col + j < 0 || col + j >= colEdge) continue;
            boomArr[row + i][col + j]++;
        }
    }
}