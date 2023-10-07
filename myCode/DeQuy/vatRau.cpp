#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool d[1002][1002];
int m, n, s = 1, cmax = 1;
multiset<int> se;

void scan(){
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> d[i][j];
}

void TaoTuong(){
    for (int i = 0; i < m + 2; i++) d[i][0] = 1;
    for (int i = 0; i < n + 2; i++) d[0][i] = 1;
    for (int i = 1; i < n + 2; i++) d[m + 1][i] = 1;
    for (int i = 1; i < m + 2; i++) d[i][n + 1] = 1;
}

void print(){
    for (int i = 0; i < m + 2; i++){
        for (int j = 0; j < n + 2; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
}

void printSet(){
    multiset<int>::iterator it = se.begin();
    for (; it != se.end(); it++)
        cout << *it << " ";
}

void try1(int x, int y){
    d[x][y] = 1;
    if (!d[x + 1][y]){
        s++;
        try1(x + 1, y);
    }
    if(!d[x][y + 1]){
        s++;
        try1(x, y + 1);
    }
    if(!d[x - 1][y]){
        s++;
        try1(x - 1, y);
    }
    if(!d[x][y - 1]){
        s++;
        try1(x, y - 1);
    }
}

void slve(){
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++){
            if (!d[i][j]) {
                try1(i, j);
                se.insert(s);
                s = 1;
            }
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> m >> n;
    scan();
    TaoTuong();
    // print();
    slve();
    cout << se.size() << endl;
    printSet();
    return 0;
}