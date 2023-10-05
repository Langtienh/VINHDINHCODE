#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a, b, s1, s2;
    cin >> a >> b;
    s1 = a; s2 = b;
    bool bo = false;
    while(s1.size() < s2.size()) s1 = '0'+ s1;
    while(s2.size() < s1.size()) s2 = '0' + s2;
    for (int i = 0; i < s1.size(); i++)
        if (s2[i] > s1[i]){
            bo = true; break;
        }
        else if(s2[i] < s1[i])break;
    if (bo) cout << b;
    else cout << a;
    return 0;
}
   