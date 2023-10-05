#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll ucln(ll a, ll b){
    ll temp;
    while (b){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ucln(ucln(a, b), ucln(c, d));
    return 0;
}