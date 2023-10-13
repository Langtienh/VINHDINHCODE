#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll m, a[23], s = 0;
int n, cnt = 0;
bool res[23], temp[23], ok;

void scan(){
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void print(){
    cout << cnt << endl;
    ll s = 0;
    for (int i = 1; i <= n; i++)
        if (res[i]) {
            cout << i << " ";
            s += a[i];
        }
}

void CP(){
    for (int i = 1; i <= n; i++){
        res[i] = temp[i];
        if (temp[i]) cnt++;
    }
}

void try1(int k){ 
    if (s == m) {
        CP();
        ok = true;
        return;
    }
    if (k == n + 1) return;
    if (!ok) try1(k + 1);
    temp[k] = 1;
    s += a[k];
    if (!ok) try1(k + 1);
    s -= a[k];
    temp[k] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n >> m; scan();
    try1(1);
    if (ok) print();
    else cout << "khongtherut" << endl;
    return 0;
}
    