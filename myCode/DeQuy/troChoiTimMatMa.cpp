#include<bits/stdc++.h>
#define ll long long

using namespace std;

int m, n, cmax = 1, cnt;
char d[20][20];
bool b[20][20];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
string smax = "", temp;

void scan(){
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> d[i][j];
}

bool check(int x, int y, int x2, int y2){
    return x2 >= 0 && y2 >= 0 && x2 < n && y2 < m && !b[y2][x2] && d[y][x] <= d[y2][x2];
}

void try1(int x, int y){
    for (int i = 0; i < 4; i++){
        int x2 = x + dx[i];
        int y2 = y + dy[i];
        if (check(x, y, x2, y2)){
            b[y2][x2] = 1;
            cnt++;
            temp += d[y2][x2];
            if (cnt > cmax) {
                cmax = cnt;
                smax = temp;
            }
            try1(x2, y2);
            b[y2][x2] = 0;
            cnt--;
            temp.erase(temp.size() - 1);
        }
    }
}

void slove(){
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
            cnt = 1; temp = "";
            b[i][j] = 1;
            temp += d[i][j];
            try1(j, i);
            b[i][j] = 0;
        }
}


void print(){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << d[i][j] << " ";
    cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> m >> n; scan();
    temp = "12"; 
    slove();
    // print();
    cout << cmax << endl;
    return 0;
}
