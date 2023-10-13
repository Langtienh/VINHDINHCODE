#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

bool nt[41], b[21];
int n, a[21];

void sang(){
    for (int i = 2; i <= 40; i++)
        nt[i] = 1;
    for (int i = 2; i <= 5; i++)
        if (nt[i])
            for (int j = i * i; j <= 40; j += i)
                nt[j] = 0;         
}

void print(){
    for (int i = 1; i <= 2 * n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void try1(int cnt){
    for (int v = 2; v <= 2 * n; v++)
        if (!b[v] && nt[v + a[cnt - 1]]){
            a[cnt] = v;
            b[v] = 1;
            if (cnt == 2 * n && nt[v + 1]) print();
            else try1(cnt + 1);
            b[v] = 0;
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    sang();
    cin >> n;
    a[1] = 1;
    try1(2);
    return 0;
}
    