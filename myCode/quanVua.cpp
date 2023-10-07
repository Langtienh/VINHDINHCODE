#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool d[1002][1002];
int n, hx1, hx2, hy1, hy2, vx1, vx2, vy1, vy2;

void TaoTuong(){
    for (int i = 0; i < n + 2; i++)
        d[i][0] = d[0][i] = 1;
    for (int i = 1; i < n + 2; i++) 
        d[n + 1][i] = d[i][n + 1] = 1;
    // hang cheo
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++){
            d[i][j] = (i + j == hx1 + hy1 || j - i == hx1 - hy1)
            || (i + j == hx2 + hy2 || j - i == hx2 - hy2);
        }
    for (int i = 1; i <= n; i++)
        d[i][hx1] = d[i][hx2] = d[hy1][i] = d[hy2][i] = 1;
}

void print(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
}

bool try1(int x, int y) {
    if (x == vx2 && y == vy2) return true;
        d[y][x] = 1;
    if (!d[y + 1][x] && try1(x, y + 1)) return true;
    if (!d[y][x + 1] && try1(x + 1, y)) return true;
    if (!d[y - 1][x] && try1(x, y - 1)) return true;
    if (!d[y][x - 1] && try1(x - 1, y)) return true;
    // di cheo
    if (!d[y + 1][x + 1] && try1(x + 1, y + 1)) return true;
    if (!d[y - 1][x + 1] && try1(x + 1, y - 1)) return true;
    if (!d[y - 1][x - 1] && try1(x - 1, y - 1)) return true;
    if (!d[y + 1][x - 1] && try1(x - 1, y + 1)) return true;
    d[y][x] = 0; // Unmark the cell when backtracking
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n;
    cin >> hx1 >> hy1 >> hx2 >> hy2;
    cin >> vx1 >> vy1;
    cin >> vx2 >> vy2;
    TaoTuong();
    if (try1(vx1, vy1)) cout << "YES\n";
    else cout << "NO\n";
    // print();
    return 0;
}