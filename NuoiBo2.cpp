#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll m, a[23], s, s2;
int n, cnt;
bool temp[23];

void scan(){
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        s += a[i];
    }
}

void print(){
    // cout << s << " " << s2 << endl;
    for (int i = 1; i <= n; i++){
        if (temp[i]) cout << 2;
        else cout << 1;
    }
    cout << endl;
}

void print2(){
    for (int i = 1; i <= n; i++) 
        cout << temp[i];
    cout << endl;
}
void printArr(){
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

void try1(int k){ 
    if (k == n + 1) {
        if (s2 == s - s2) {
            print();
            cnt++;
        }
        return;
    }
    try1(k + 1);
    temp[k] = 1;
    s2 += a[k];
    if (s2 <= s - s2) try1(k + 1);
    s2 -= a[k];
    temp[k] = 0;
}

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cnt = s = s2 = 0;
    cin >> n; scan(); 
    // printArr();
    try1(1);
    if (cnt == 0) cout << -1 << endl;
    return 0;
}
    