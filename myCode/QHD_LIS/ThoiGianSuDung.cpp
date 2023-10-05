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
    ll maxTime = 0, toChuc[n], kToChuc[n];
    sort(pe, pe + n);
    toChuc[0] = pe[0].first - pe[0].second + 1;
    kToChuc[0] = 0;
    for (int i = 1; i < n; i++){
        toChuc[i] = pe[i].first - pe[i].second + 1;
        kToChuc[i] = 0;
        for (int j = 0; j < i; j++)
            if(pe[i].second > pe[j].first)
                toChuc[i] = max(toChuc[i], toChuc[j] + pe[i].first - pe[i].second + 1);
            else kToChuc[i] = max(kToChuc[i], toChuc[j]);
    }
    cout << max(toChuc[n - 1], kToChuc[n - 1]) << endl;
    // for (int i = 0; i < n; i++)
    //     cout << pe[i].first << " " << pe[i].second << endl;
    return 0;
}
  