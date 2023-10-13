#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

int n;
ll a[23], s, k;
char c[23];
bool b[23];

void scan(){
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    s = a[0];
}

void print(){
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << c[i];
    cout << a[n - 1];
}

void try1(int v){
    if (v == n && s == k){
        print(); return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> k;
    scan();
    try1(0);
    return 0;
}
    