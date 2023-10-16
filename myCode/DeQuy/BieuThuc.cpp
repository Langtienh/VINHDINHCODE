#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

int n;
ll a[23], amax, k;
char c[23];

void scan(){
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            if (a[i] < 0) a[i] = -a[i];
            if (a[i] > amax) amax = a[i];
        }
    }
}

void print(){
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << c[i];
    cout << a[n - 1] << endl;
}

bool check(int v, ll s){
    // return 1;
    if (s > k) return s - amax * (n - v - 1) < k;
    return s + amax * (n - v - 1) > k;
}

void try1(int v, ll s){
    if (v == n - 1){
        if (s == k) print(); 
        return;
    }
    if (check(v, s)){
        c[v] = '+';
        try1(v + 1, s + a[v + 1]);
        c[v] = '-';
        try1(v + 1, s - a[v + 1]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> k;
    scan();
    try1(0, a[0]);
    return 0;
}
    