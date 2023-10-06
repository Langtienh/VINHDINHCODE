#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, cntt, res[25], d[25];
ll s = 0, m;
bool t[25], b;

void scan(){
    for (int i = 1; i <= n; i++)
        cin >> d[i];
}

void print(){
    if (!b){
        cout << "khongtherut" << endl;
        return;
    }
    cout << cntt << endl;
    for (int i = 0; i < cntt; i++)
        cout << res[i] << " ";
}

void Try(int cnt){
    if (s == m){
        cntt = cnt;
        b = true;
        return;
    }
    for (int i = 1; i <= n; i++){
        if (!t[i]){
            s += d[i];
            t[i] = true;
            res[cnt] = d[i];
            Try(cnt + 1);
            s -= d[i];
            t[i] = false;
        }
        if (b) return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m; scan();
    Try(0);
    print();
    return 0;
}