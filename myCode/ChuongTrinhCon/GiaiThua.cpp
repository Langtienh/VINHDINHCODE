#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll gt[21]; 

void giaiThua(){
    gt[0] = 1;
    for (int i = 1; i <= 20; i++)
        gt[i] = gt[i - 1] * i;
}
// nhap mang O(n)
void scanArr(ll a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n; cin >> n;
    ll a[n]; scanArr(a, n);
    giaiThua();
    for (int i = 0; i < n; i++)
        cout << gt[a[i]] << endl;
    return 0;
}