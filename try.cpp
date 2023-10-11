#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

ll m, w[41], v[41], sv, sw, cmax, wmin = LLONG_MAX, vmax;
int n, cnt;
bool res[41], temp[41], ok;

void scan(){
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
        if (w[i] < wmin) wmin = w[i];
        if (v[i] > vmax) vmax = v[i];
    }
}

void print(){
    cout << cmax << endl;
    // cout << cnt << endl;
    // for (int i = 1; i <= n; i++)
    //     if (res[i]) cout << i << " ";
}

void CP(){
    cnt = 0;
    for (int i = 1; i <= n; i++){
        res[i] = temp[i];
        if (temp[i]) cnt++;
    }
}

bool check(int k){
    if (sw > m) return false;
    if (sv + vmax * (n - k) < cmax) return false;
    return true;
}

void try1(int k){ 
    if (k == n + 1){
        if (sw <= m)
            if (sv > cmax){
                cmax = sv;
                CP();
            }
        return;
    }
    try1(k + 1);
    sw += w[k]; sv += v[k]; temp[k] = 1;
    if (check(k)) try1(k + 1);
    sw -= w[k]; sv -= v[k]; temp[k] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n >> m; scan();
    try1(1);
    print();
    return 0;
}
    