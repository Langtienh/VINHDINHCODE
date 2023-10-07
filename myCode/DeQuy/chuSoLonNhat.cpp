#include<bits/stdc++.h>
#define ll long long

using namespace std;

int chuSoLonNhat(string s){
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] > cnt) cnt = s[i];
    return cnt - '0';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s; cin >> s;
    cout << chuSoLonNhat(s) << endl;
    return 0;
}