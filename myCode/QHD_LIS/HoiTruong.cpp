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
    pair<ll, ll> pe[n];
    ll s, e;
    for (int i = 0; i < n; i++){
        cin >> s >> e;
        pe[i].first = e;
        pe[i].second = s;
    }
    sort(pe, pe + n);
    ll l[n], maxL = 1; fill(l, l + n, 1);
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++)
            if(pe[i].second > pe[j].first) l[i] = max(l[i], l[j] + 1);
        maxL = max(maxL, l[i]);
    }
    cout << maxL << endl;
    // printArr(l, n);
    // for (int i = 0; i < n; i++)
    //     cout << pe[i].first << " " << pe[i].second << endl;
    return 0;
}
    