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
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll a, b;
    cin >> a >> b;
    cout << ucln(a, b) << endl;
    return 0;
}