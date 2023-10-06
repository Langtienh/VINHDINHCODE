 #include<bits/stdc++.h>

#define ll long long
using namespace std;


int n;

// in mang O(n)
void printArr(vector<int> v) {
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}

void hoanvi(vector<int> v, vector<bool> b){
    if (v.size() == n) {
        printArr(v); return;
    }
    for (int i = 1; i <= n; i++)
        if(!b[i]){
            b[i] = true;
            v.push_back(i);
            hoanvi(v, b);
            b[i] = false;
            v.pop_back();
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    vector<int> v;
    vector<bool> b(11, false);
    hoanvi(v, b);

    return 0;
}
    