#include<bits/stdc++.h>
#define ll long long

using namespace std;

string a, b;
int n, m;

bool cmp1(int i, int j) {
    while (i < n && j < m) {
        if (a[i] < b[j]) return true;
        if (a[i] > b[j]) return false;
        i++; j++;
    }
    return j == m;
}

bool cmp2(int i, int j) {
    while (i < n && j < m) {
        if (a[i] > b[j]) return true;
        if (a[i] < b[j]) return false;
        i++; j++;
    }
    return j == m;
}

void merge(bool (*cmp)(int, int)){
    int i = 0, j = 0;
    while (i < n && j < m){
        if (cmp(i, j)){
            cout << a[i]; i++;
        }
        else {
            cout << b[j]; j++;
        }
    }
    while (i < n){
        cout << a[i]; i++;
    }
    while (j < m){
        cout << b[j]; j++;
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // cin >> a >> b;
    while (cin >> a >> b) {
    n = a.size(), m = b.size();
    merge(cmp1);
    merge(cmp2);
    }
    return 0;
}
