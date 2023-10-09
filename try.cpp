#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll m, a[23], s1, s2;
int n, cnt;
bool temp[23];

void scan(){
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void print(){
    for (int i = 1; i <= n; i++){
        if (temp[i]) cout << 1;
        else cout << 2;
    }
    cout << endl;
}

void try1(int k){ 
    if (k == n + 1) {
        if (s1 == s2) print();
        return;
    }
    

}

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m; scan();
    cnt = s1 = s2 = 0;
    try1(1);
    cout << cnt << endl;
    return 0;
}
    