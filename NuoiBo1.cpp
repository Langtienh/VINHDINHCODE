#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll m, a[23], s;
int n, cnt, tmp, cmin = INT_MAX;
bool temp[23];

void scan(){
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void try1(int k){ 
    if (s == m) {
        if (tmp < cmin) cmin = tmp;
        cnt++;
        return;
    }
    if (k == n + 1) return;
    try1(k + 1);
    temp[k] = 1;
    s += a[k];
    tmp++;
    try1(k + 1);
    tmp--;
    s -= a[k];
    temp[k] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n >> m; scan();
    tmp = cnt = s = 0;
    try1(1);
    cout << cnt << " " << cmin << endl;
    return 0;
}
    