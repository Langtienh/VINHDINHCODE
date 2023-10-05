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

struct TD{
    ll start; ll end; ll price;
};

bool cmp(const TD &a, const TD &b){
    return a.start < b.start;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
    int n, t; cin >> t;
    TD td[10000];
    while(t--){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> td[i].start >> td[i].end >> td[i].price;
    sort(td, td + n, cmp);
    ll maxSum = 0, sc[n], sk; 
    sc[0] = td[0].price; sk[0] = 0;
    for (int i = 1; i < n; i++){
        for (int i = 0;)
    }
    // for (int i = 0; i < n; i++)
    //     cout << td[i].start << " " << td[i].end << " " << td[i].price << endl;
    }
    return 0;
}