#include<bits/stdc++.h>

#define ll long long
using namespace std;

bool b = false;
int x, y, d[9]; 

bool check(int v, int k){
    for (int i = 1; i <= 8; i++) {
        if (d[i] == v) return false;
        if (d[i]){
            if (d[i] + i == v + k) return false;
            if (d[i] - i == v - k) return false;
        }
    }
    return true;
}

void print(){
    for (int i = 1; i <= 8; i++)
        if (i != x)
        cout << i << " " << d[i] << endl;
}

void back_Track(int k){
    if (k == 9){
        print(); 
        b = true;
        return;
    }
    if (d[k]){
        back_Track(k + 1);
    }
    else {
        for (int v = 1; v <= 8; v++){
            if (check(v, k)){
                d[k] = v;
                back_Track(k + 1);
                d[k] = 0;
            }
            if (b) return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> x >> y;
    memset(d, 0, sizeof(d));
    d[x] = y;
    back_Track(1);
    return 0;
}
    