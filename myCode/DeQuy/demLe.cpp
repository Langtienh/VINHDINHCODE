#include<bits/stdc++.h>
#define ll long long

using namespace std;

int demLe(string s){
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] % 2 == 1) cnt++;
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s; cin >> s;
    cout << demLe(s) << endl;
    return 0;
}