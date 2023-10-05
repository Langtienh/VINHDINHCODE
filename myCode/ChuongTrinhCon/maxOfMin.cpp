#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll d[1000001];

ll min3(ll &a, ll &b, ll &c){
    if (a < b && a < c) return a;
    if (b < c) return b;
    return c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n; cin >> n;
    cin >> d[0] >> d[1] >> d[2];
    ll max = min3(d[0], d[1], d[2]);
    ll temp;
    for (int i = 3; i < n; i++){
        cin >> d[i]; temp = min3(d[i - 2], d[i - 1], d[i]);
        if (temp > max) max = temp;
    }
    cout << max;
    return 0;
}
    