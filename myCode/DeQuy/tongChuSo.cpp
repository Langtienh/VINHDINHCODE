#include<bits/stdc++.h>
#define ll long long

using namespace std;

int tongChuSo(ll n){
    int sum = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n; cin >> n;
    cout << tongChuSo(n);
    return 0;
}