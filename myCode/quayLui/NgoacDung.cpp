#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

int n, a, b;
vector<string> v;

void print(){
    int m = v.size();
    cout << m << endl;
    for (int i = 0; i < m; i++)
        cout << v[i] << endl;
}

void try1(string s){
    if (s.size() == n){
        v.push_back(s);
        return;
    }
    if (a - b < n - a - b){
        a++;
        try1(s + "(");
        a--;
    }
    
    if (a > b){
        b++;
        try1(s + ")");
        b--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    try1("");
    print();
    return 0;
}
    