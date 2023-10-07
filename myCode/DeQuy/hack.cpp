#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll dx[15][19];
ll m = 1e17, x;
map<ll, bool> mp;

void quyHoach(){
    memset(dx, 0, sizeof(dx));
    dx[0][0] = 1;
    mp[1] = true;
    for (int i = 1; i < 15; i++){
        dx[i][0] = dx[i - 1][0] * 20;
        mp[dx[i][0]] = true;
    }
    for (int i = 0; i < 15; i++)
        for (int j = 1; j < 19; j++){
            if (dx[i][j - 1] > m) break;
            dx[i][j] = dx[i][j - 1] * 10;
            mp[dx[i][j]] = true;
        }
}

void print(){
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 19; j++)
            cout << dx[i][j] << " ";
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    quyHoach();
    int n; cin >> n;
    while(n--){
        cin >> x;
        if (mp[x]) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}