#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool b[11][11];
int d[11][11];
int x, y, u, v, n, cnt;
const int dx[8] = {2, -2, 2, -2, 1, -1, 1, -1};
const int dy[8] = {1, 1, -1, -1, 2, 2, -2, -2};

bool check(int a, int b){
    return a > 0 && b > 0 && a < 11 && b < 11;
}

void init(){
    cnt = 0;
    for (int i = 1; i < 11; i++)
        for (int j = 1; j < 11; j++) b[i][j] = false;
}

void try1(int x, int y, int k){
    if (cnt == 50) return;
    for (int i = 0; i < 8; i++){
        u = x + dx[i]; v = y + dy[i];
        if (check(u, v)){
            if (k == 1){
                if (!b[u][v]){
                    cnt++;
                    b[u][v] = true;
                }
            }
            else try1(u, v, k - 1);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        cin >> x >> y >> n;
        init();
        try1(x, y, n);
        cout << cnt << endl;
    }
    return 0;
}
