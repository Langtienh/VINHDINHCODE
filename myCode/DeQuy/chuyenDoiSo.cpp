#include<bits/stdc++.h>
#define ll long long

using namespace std;

void print(vector<int> v){
    int n = v.size();
    cout << "YES" << endl << n << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
    cout << endl;
}

bool check(int a, int b){
    vector<int> v;
    v.push_back(b);
    while(b % 2 == 0 || b % 10 == 1){
        if (b % 2 == 0) {
            b /= 2;
            v.push_back(b);
        }
        if (b <= a) break;
        if (b % 10 == 1){ 
            b /= 10;
            v.push_back(b);
        }
        if (b <= a) break;
    }
    if (b == a) print(v);
    else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b; 
    while (cin >> a >> b){
        check(a, b);
    }
    // cin >> a >> b;
    return 0;
}
