#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n;
ll s = 0, m, smax = LLONG_MIN, w[25], v[25];
vector<int> v, res;

void scan(){
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
}

void print(){
    int n = res.size();
    cout << n << endl;
    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
}

void try1(int cnt){

}

void try2(){

}

void solove(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m; scan();
    solove();
    print();
    return 0;
}