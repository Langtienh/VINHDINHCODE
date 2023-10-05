#include <bits/stdc++.h>

using namespace std;

int x[36], s, t = 0;

void print(int cnt) {
    cout << s << " = ";
    for(int i = 1; i < cnt; ++i) cout << x[i] << "+";
    cout << x[cnt] << "\n";
}

void back_track(int cnt) {
    if (t == s){
        print(cnt - 1); return;
    }
    for (int i = 1; i <= s - t; i++){
        if (i >= x[cnt - 1]){
            x[cnt] = i;
            t += i;
            back_track(cnt + 1);
            t -= i;
        }    
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> s;
    x[0] = 0;
    back_track(1);
}

