#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll n;

ll giaiThua(){
    ll s = 1;
    while(n > 0) {
        s *= n; n--;
    }
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n;
    cout << giaiThua() << endl;
    return 0;
}