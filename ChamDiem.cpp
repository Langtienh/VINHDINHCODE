#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

int n, k, s, sum, a[20][20], res[20];
bool b;

void enter(){
    cin >> s >> n >> k;
    FOR (i, 0, n - 1) 
        FOR (j, 0, k - 1)
            cin >> a[i][j];
}

void print(){
    FOR (i, 0, k - 1) cout << res[i] << " ";
}

void try1(int v){
    if (v == k){
        if (sum == s){
            cout << "YES" << endl;
            b = 1;
            print();
        }
        return;
    }
    FOR (i, 0, n - 1){
        if (a[i][v] >= res[v - 1] || v == 0) {
            res[v] = a[i][v];
            sum += a[i][v];
            if (sum <= s) try1(v + 1);
            sum -= a[i][v];
        }
        if (b) return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    enter();
    try1(0);
    if (!b) cout << "NO" << endl;
    return 0;
}
    