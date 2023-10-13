#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

int n, cnt, res;
ll a[23], s, k, amax = LLONG_MIN;
bool b[23];

void scan(){
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > amax) amax = a[i];
    }
}

void try1(int v){
    if (s % k == 0 && cnt > res) res = cnt;
    if (v == n) return;
    if (s + amax * (n - v - 1) >= k) try1(v + 1);
    b[v] = 1; s += a[v]; cnt++;
    if (s + amax * (n - v - 1) >= k) try1(v + 1);
    b[v] = 0; s -= a[v]; cnt--;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    scan();
    try1(0);
    cout << res << endl;
    return 0;
}
    