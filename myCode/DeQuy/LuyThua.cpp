#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1000000007;

ll luyThua(ll a, ll b){
    if (b == 0) return 1;
    ll tmp = luyThua(a, b / 2) % mod;
    tmp = (tmp * tmp) % mod;
    if (b % 2 == 0) return tmp;
    return (a * tmp) % mod;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll a, b; cin >> a >> b;
    cout << luyThua(a, b) << endl;
    return 0;
}