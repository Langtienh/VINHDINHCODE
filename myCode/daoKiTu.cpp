#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> v;
char s[10], tmp[10] = "";
int n;
bool b[10], d[10][256];

void print(){
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}

void quayLui(int cnt){
    if (cnt == n){
        tmp[cnt] = '\0';
        v.push_back(tmp);
        return;
    }
    for (int i = 0; i < n; i++){
        if (!d[cnt][s[i]] && !b[i]){
            b[i] = true;
            tmp[cnt] = s[i];
            quayLui(cnt + 1);
            b[i] =  false;
            d[cnt][s[i]] = true;
        }
    }
    for (int i = 0; i < n; i++)
        d[cnt][s[i]] = false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    scanf("%s", s);
    n = strlen(s);
    sort(s, s + n);
    quayLui(0);
    cout << v.size() << endl;
    print();
    return 0;
}
    