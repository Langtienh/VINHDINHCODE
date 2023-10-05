#include<bits/stdc++.h>

#define llong long long
using namespace std;

// in mang O(n)
void printArr(llong a[], int l, int r) {
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
    // freopen("input.txt","r", stdin);
	// freopen("output.txt","w",stdout);

    int n, k; cin >> n;
    llong a[n + 1], l[n + 1];
    scanArr(a + 1, n);
    a[0] = INT_MIN; l[0] = 0;
    llong maxL = 0;
    for (int i = 1; i <= n; i++){
        l[i] = 1;
        for (int j = 0; j < i; j++)
            if (a[i] > a[j]) l[i] = max(l[i], l[j] + 1);
        if(l[i] > maxL){
            maxL = l[i]; k = i;
        }
    }
    cout << maxL << endl;
    // printArr(l, 1, n);
    stack<int> st;
    for (int i = k; maxL > 0; i--){
        if(l[i] == maxL) {
            st.push(i);
            maxL--;
        }
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
    