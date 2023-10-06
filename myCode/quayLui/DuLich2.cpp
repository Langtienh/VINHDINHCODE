#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n;
ll  cmin = LLONG_MAX, s = 0;
ll d[20][20], tp[20], res[20];
bool b[20]; // Các thành phố đã đi qua

// Nhập quãng đường
void enter(){
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> d[i][j];
}

void Copy(){
    for (int i = 1; i <= n; i++) 
        res[i] = tp[i];
}

void print(){
    for (int i = 1; i <= n; i++)
        cout << res[i] << " ";
}

void diDenTP(int cnt){
    for (int i = 1; i <= n; i++){
        if (!b[i]){
            b[i] = true;
            tp[cnt] = i;
            s += d[tp[cnt - 1]][i];
            if (cnt == n && s < cmin) {
                cmin = s; Copy();
            }
            // Nếu quãng đường cần đi s lớn hơn cmin thì dừng lại không đi nữa
            else if (s < cmin) diDenTP(cnt + 1);
            b[i] = false;
            s-= d[tp[cnt - 1]][i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    memset(d, false, sizeof(d)); tp[0] = 0;
    cin >> n; enter();
    diDenTP(1); // bắt đầu từ tp 0 đi đến các TP khác
    print();
    return 0;
}