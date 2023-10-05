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

int minInder(int a, int b){
    return a < b ? a : b;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    // freopen("input.txt","r", stdin);
	// freopen("output.txt","w",stdout);

    int n, k; cin >> n >> k;
    ll a[n]; scanArr(a, n);
    ll b[n]; scanArr(b, n);
    ll sD[n], sKD[n], maxSum = 0;
    sD[0] = b[0]; 
    sKD[0] = 0;
    for (int i = 1; i < n; i++){
        sKD[i] = 0; sD[i] = b[i];
        for (int j = 0; j < i; j++){
            if(a[i] >= a[j] + k) sD[i] = max(sD[i], max(sD[j], sKD[j]) + b[i]);
            else sKD[i] = max(sKD[i], max(sD[j], sKD[j]));
        }
    }

    // printArr(sD, n); cout << endl;
    // printArr(sKD, n); cout << endl;
    maxSum = max(sD[n - 1], sKD[n - 1]);
    cout << maxSum << endl;
    return 0;
}#include<bits/stdc++.h>

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

    int n, k; cin >> n;
    ll a[n]; scanArr(a, n);
    ll maxL = 1, l[n]; l[0] = 1;
    for (int i = 1; i < n; i++){
        l[i] = 1;
        for (int j = 0; j < i; j++)
            if (a[i] % a[j] == 0) l[i] = max(l[i], l[j] + 1);
        if(l[i] >= maxL){
            maxL = l[i]; k = i;
        }
    }
    cout << maxL << endl;
    stack<int> st;
    st.push(k); k--; maxL--;
    for (int i = k; maxL > 0; i--){
        if(l[i] == maxL && a[st.top()] % a[i] == 0) {
            st.push(i);
            maxL--;
        }
    }
    while(!st.empty()){
        cout << st.top() + 1 << " ";
        st.pop();
    }
    return 0;
}
    