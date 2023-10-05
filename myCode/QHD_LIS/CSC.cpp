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
    // freopen("input.txt","r", stdin);
	// freopen("output.txt","w",stdout);

    int n; cin >> n;
    ll a[n], l[51][n], maxL = 1;
    for (int i = 1; i <= 50; i++) l[i][0] = 1;
    scanArr(a, n);
    // sort(a, a + n);
    // printArr(a, n); cout << endl;
    for (int k = 1; k <= 50; k++)
        for (int i = 1; i < n; i++){
            l[k][i] = 1;
            for (int j = i - 1; j >= 0; j--)
                if (a[i] - a[j] == k){
                    l[k][i] = max(l[k][j] + 1, l[k][i]);
                }
            maxL = max(maxL, l[k][i]);
        }
    cout << maxL << endl;
    return 0;
}
    