#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, a[20], cmin = INT_MAX, s = 0;
bool b[20];
set<set<int> > v;
set <int> temp;

void scan(){
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void print(){
    cout << v.size() << " " << cmin << endl;
}

void Try(){
    if (s == m){
        v.insert(temp);
        if (cmin > temp.size())
            cmin = temp.size();
        return;
    }
    for (int i = 0; i < n; i++){
        if (!b[i]){
            s += a[i];
            b[i] = true;
            temp.insert(a[i]);
            Try();
            s -= a[i];
            b[i] = false;
            temp.erase(a[i]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m; scan();
    Try();
    print();
    return 0;
}