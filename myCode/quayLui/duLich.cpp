#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, daDi = 0;
ll  cmin = LLONG_MAX, s = 0;
ll d[20][20], tp[20]; // quãng đường từ TP i đến TP j
bool b[20]; // Các thành phố đã đi qua

// Nhập quãng đường
void enter(){
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> d[i][j];
}
// Nếu quãng đường cần đi s lớn hơn cmin thì dừng lại không đi nữa

void diDenTP(int cnt){
    for (int i = 1; i <= n; i++){
        if (!b[i]){
            b[i] = true;
            s += d[cnt][i];
            daDi++;
            if (daDi == n) cmin = min(cmin, s);
            else if (s < cmin) diDenTP(i);
            daDi--;
            b[i] = false;
            s-= d[cnt][i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    memset(d, false, sizeof(d)); tp[0] = 0;
    cin >> n; enter();
    diDenTP(0); // bắt đầu từ tp 0 đi đến các TP khác
    cout << cmin << endl;
    return 0;
}