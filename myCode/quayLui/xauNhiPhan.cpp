#include<bits/stdc++.h>

#define ll long long
using namespace std;

int n;

void xauNhiPhan(string s){
    if (s.size() == n){
        cout << s << endl;
        return;
    }
    xauNhiPhan(s + '0');
    xauNhiPhan(s + '1');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n; string s = "";
    xauNhiPhan(s);
    return 0;
}
    