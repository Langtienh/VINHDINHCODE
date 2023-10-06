#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, k, cnt = 0, inder[10];
ll a[9];
bool b[9];


void EnterArr(){
    for (int i = 0; i < n; i++) cin >> a[i];
}

void print(){
    for (int i = 0; i < k; i++)
        cout << a[inder[i]] << " ";
    cout << endl;
}

void back_Track(int in){
    for (int i = 0; i < n; i++){
        if (b[i]){
            inder[in] = i;
            b[i] = false;
            if (in ==  k - 1) {
                print(); cnt++;
            }
            else back_Track(in + 1);
            b[i] = true;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> k >> n;
    EnterArr();
    memset(b, true, sizeof(b));
    sort(a, a + n);
    back_Track(0);
    cout << cnt << endl;
    return 0;
}