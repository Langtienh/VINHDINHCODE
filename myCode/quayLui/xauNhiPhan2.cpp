#include<bits/stdc++.h>

#define ll long long
using namespace std;

int n, cnt = 0;
vector<string> v;

void xauNhiPhan(string s, bool b){
    if (s.size() == n){
        cnt++;
        v.push_back(s);
        return;
    }
    xauNhiPhan(s + '0', b);
    if (b && !s.empty() && s[s.size() - 1] == '0') {
        b = false;
        xauNhiPhan(s + '1', b);
        b = false;
    }
    if (s.empty() || s[s.size() - 1] == '1')
        xauNhiPhan(s + '1', b);
}

void inChuoi(){
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    bool b = true;
    xauNhiPhan("", b);
    cout << cnt << endl;
    inChuoi();
    
    return 0;
}
    