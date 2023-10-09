#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct poin{
    int x; int y;
};

int m, n, a, b, x, y, x2, y2;
bool d[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
vector<poin> v;
poin tmp;

void scan(){
    char c;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++){
            cin >> c;
            if (c == 'J'){
                x = j; y = i;
            }
            if (c == 'R'){
                a = j, b = i;
            }
            if (c == 'x') d[i][j] = true;
        }
}

void khoiTao(){
    for (int i = 0; i < m + 2; i++) 
        d[i][0] = d[i][n + 1] = true;
    for (int i = 0; i < n + 2; i++)
        d[0][i] = d[m + 1][i] = true;
}

void print(){
    int n = v.size();
    cout << n << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << v[i].y << " " << v[i].x << endl;
}

bool try1(int x, int y){
    if (x == a && y == b)
        return true;

    d[y][x] = true;
    for (int i = 0; i < 4; i++){
        x2 = x + dx[i];
        y2 = y + dy[i];
        if (!d[y2][x2]){ 
            tmp.x = x2;
            tmp.y = y2;
            v.push_back(tmp);
            if (try1(x2, y2)) return true;
            v.pop_back();
        }
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> m >> n;
    scan();
    khoiTao();
    tmp.x = x; tmp.y = y;
    v.push_back(tmp);
    // print();
    if(try1(x, y)) {
        cout << "YES" << endl;
        print();
    }
    else cout << "NO" << endl;
    
    return 0;
}
    