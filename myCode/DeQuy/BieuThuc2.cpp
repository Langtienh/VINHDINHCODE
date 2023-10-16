#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

int n;
ll a[23], amax, k;
char c[23];
set<string> se;

void scan(){
    cin >> a[0];
    if (a[0] < 0){
        a[0] = - a[0];
        c[0] = '-';
    }
    else c[0] = '+';
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) a[i] = - a[i];
    }
}

void print(){
    set<string>::iterator it = se.begin();
    for (; it != se.end(); it++)
        cout << *it << endl;
}

string toString(){
    string s = "";
    for (int i = 0; i < n; i++)
        s += c[i] + to_string(a[i]);
    if (c[0] == '+') s.erase(0, 1);
    return s;
}

void slove(){
    ll s, temp;
    s = temp = 0;
    bool b;
    for (int i = 0; i < n; i++){
        if (c[i] == '*') temp *= a[i];
        else {
            if (b) s += temp;
            else s -= temp;
            temp = a[i];
            b = c[i] == '+';
        }
    }
    if (b) s += temp;
    else s -= temp;
    if (s == k){
        string tmp = toString();
        se.insert(tmp);
    }
}

void try1(int v){
    if (v == n){
        slove();
        return;
    }
    c[v] = '+';
    try1(v + 1);
    c[v] = '-';
    try1(v + 1);
    c[v] = '*';
    try1(v + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    scan();
    try1(1);
    print();
    return 0;
}
    