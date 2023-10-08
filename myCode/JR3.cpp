#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct poin{
    int x; int y;
};

int m, n, cnt = 1, cmin = INT_MAX;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
bool ok, b[501][501];
poin J, R, res[501], tmp[501]; // R->J

void CP(){
    for (int i = 1; i <= cnt; i++)
        res[i] = tmp[i];
}

bool check(int x, int y){
    return x > 0 && y > 0 && y <= m && x <= n && !b[y][x];
}

void scan(){
    char c;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++){
            cin >> c;
            if (c == 'x') b[i][j] = 1;
            if (c == 'o') b[i][j] = 0;
            if (c == 'J') {
                J.x = j; J.y = i;
            }
            if (c == 'R'){
                R.x = j; R.y = i;
                b[i][j] = 1;
                tmp[1] = R;
            }
        }
}

void print(){
    cout << "YES" << endl << cmin << endl;
    for (int i = 1; i <= cmin; i++)
        cout << res[i]. y << " " << res[i].x << endl;
}

void printMT(){
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            cout << b[i][j];
        cout << endl;
    }
}

void try1(int x, int y){
    if (cnt > cmin) return;
    if (x == J.x && y == J.y){
        ok = true;
        if (cnt < cmin){
            cmin = cnt;
            CP();
        }
        return;
    }
    for (int i = 0; i < 4; i++){
        int x2 = x + dx[i];
        int y2 = y + dy[i];
        if (check(x2, y2)){
            b[y2][x2] = 1;
            cnt++;
            tmp[cnt].x = x2;
            tmp[cnt].y = y2;
            try1(x2, y2);
            cnt--;
            b[y2][x2] = 0;

        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> m >> n;
    scan();
    // printMT();
    try1(R.x, R.y);
    if (ok) print();
    else cout << "NO" << endl;
    return 0;
}
