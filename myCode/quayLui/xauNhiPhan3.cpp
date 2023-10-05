#include<bits/stdc++.h>

#define ll long long
using namespace std;

int n;
vector<string> v;
void xauNhiPhan(string s){
    if (s.size() == n){
        v.push_back(s);
        return;
    }
    xauNhiPhan(s + '0');
    if (s.empty() || s[s.size() - 1] != '1') xauNhiPhan(s + '1');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n; string s = "";
    xauNhiPhan(s);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
    