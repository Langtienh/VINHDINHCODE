#include<bits/stdc++.h>

#define ll long long
using namespace std;

// in mang O(n)
void printArr(ll a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void printArr(int a[], int n) {
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

bool cmp(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    // So sánh theo giá trị first trước
    if (a.first < b.first) {
        return true;
    } else if (a.first > b.first) {
        return false;
    } else {
        // Nếu giá trị first bằng nhau, thì so sánh theo giá trị second
        return a.second > b.second;
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
    int n; cin >> n;
    ll a, b, l[n], maxL = 1; l[0] = 1;
    pair<ll, int> p[n];
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        p[i].first = a; p[i].second = b;
    }
    sort(p, p + n, cmp);
    for (int i = 1; i < n; i++){
        l[i] = 1;
        for (int j = 0; j < i; j++)
            if(p[i].second < p[j].second)
                l[i] = max(l[i], l[j] + 1);
        maxL = max(maxL, l[i]);
    }
    // for (int i = 0; i < n; i++)
    //     cout << p[i].first << " " << p[i].second << " " << l[i] << endl;
    cout << maxL << endl;
    return 0;
}
    