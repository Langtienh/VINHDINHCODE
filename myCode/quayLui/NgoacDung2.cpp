#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(__typeof(a) i = a; i <= b; ++i)

using namespace std;

int a, b, n;
string st;
set<string> v;

void print(){
    int m = v.size();
    cout << m << endl;
    set<string>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
}

void try1(string s, int cnt){
    if (!s.empty() && a == b) v.insert(s);
    if (cnt == st.size()) return;
    if (st[cnt] == '(' && a - b < st.size() - a - b){
        a++;
        try1(s + st[cnt], cnt + 1);
        a--;
    }
    else if(st[cnt] == ')' && a > b){
        b++;
        try1(s + st[cnt], cnt + 1);
        b--;
    }
    try1(s, cnt + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> st;
    try1("", 0);
    print();
    return 0;
}
    