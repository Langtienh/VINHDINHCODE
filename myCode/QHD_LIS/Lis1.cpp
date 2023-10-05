#include<bits/stdc++.h>

#define ll long long
using namespace std;

// in mang O(n)
void printArr(ll a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
// nhap mang O(n)
void scanArr(ll a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

ll max(ll a, ll b){
    return a > b ? a : b;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);

    int n; cin >> n;
    ll a[n], l[n];
    scanArr(a, n);
    ll maxL = 1; l[0] = 1;
    for (int i = 1; i < n; i++){
        l[i] = 1;
        for (int j = 0; j < i; j++)
            if (a[i] > a[j]) l[i] = max(l[i], l[j] + 1);
        maxL = max(maxL, l[i]);
    }
    cout << maxL;
    return 0;
}
    