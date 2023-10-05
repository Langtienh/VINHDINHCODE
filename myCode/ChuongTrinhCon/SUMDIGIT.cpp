#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll sum(string n){
    int s = 0;
    for (int i = 0; i < n.size(); i++)
        s += n[i] - '0';
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cout << a[i] << " " << sum(a[i]) << endl;
    }
    return 0;
}