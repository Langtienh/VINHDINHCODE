#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll pows(ll a, ll n){
    if (n == 0) return 1;
    ll temp = pows(a * a, n / 2);
    if (n % 2 == 0) return temp;
    return a * temp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, sum = 0; cin >> m >> n;
    for (int i = 1; i <= m; i++)
        sum += pows(i, n);
    cout << sum;
    return 0;
}