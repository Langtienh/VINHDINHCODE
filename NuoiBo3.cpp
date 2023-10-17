#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

int n, a[15], cnt, sum, sum2, res = 15;

void enter(){
    cin >> n;
    FOR (i, 0, n - 1) cin >> a[i];
}

void try1(int v){
    if (v == n){
        if (sum == sum2 && cnt < res)
            res = cnt;
        return;
    }
    cnt++;
    try1(v + 1);
    cnt--;
    sum += a[v];
    try1(v + 1);
    sum -= a[v];
    sum2 += a[v];
    try1(v + 1);
    sum2 -= a[v];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    enter();
    try1(0);
    cout << res << endl;
    return 0;
}
    