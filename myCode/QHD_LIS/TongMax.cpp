#include<bits/stdc++.h>

#define llong long long
using namespace std;

// in mang O(n)
void printArr(int a[], int l, int r) {
    for (int i = l; i <= r; i++)
        cout << a[i] << " ";
}
// nhap mang O(n)
void scanArr(llong a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

llong max(llong a, llong b){
    return a > b ? a : b;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);

    int n; cin >> n;
    llong a[n + 1], sum[n + 1], maxSum;
    scanArr(a + 1, n);
    maxSum = a[0] = INT_MIN; sum[0] = 0;
    for (int i = 1; i <= n; i++){
        sum[i] = INT_MIN;
        for (int j = 0; j < i; j++)
            if(a[j] <= a[i])
            sum[i] = max(sum[i], sum[j] + a[i]);
        maxSum = max(maxSum, sum[i]);
    }
    cout << maxSum;
    return 0;
}
