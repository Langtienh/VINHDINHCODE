#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll f[41];

ll fibo(int n){
    ll s = 0;
    if (n < 2) return f[n];
    for (int i = 2; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    f[0] = 0; f[1] = 1;
    int n; cin >> n;
    cout << fibo(n) << endl;
    return 0;
}