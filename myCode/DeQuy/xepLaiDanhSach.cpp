#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, cnt = 1;
ll a[101];
deque<ll> q;

void scan(){
    for (int i = 0; i < n; i++) cin >> a[i];
}

void slove(){
    sort(a, a + n);
    q.push_back(a[0]);
    while(cnt < n){
        if (q.back() % 3 == 0 && find(a + 1, a + n, q.back() / 3) != a + n){
            cnt++;
            q.push_back(q.back() / 3);
        }
        if (find(a + 1, a + n, q.back() * 2) != a + n){
            cnt++;
            q.push_back(q.back() * 2);
        }
        if (q.front() % 2 == 0 && find(a + 1, a + n, q.front() / 2) != a + n){
            cnt++;
            q.push_front(q.front() / 2);
        }
        if (find(a + 1, a + n, q.front() * 3) != a + n){
            cnt++;
            q.push_front(q.front() * 3);
        }
    } 
}

void print(){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop_front();
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n; scan();
    slove();
    print();
    return 0;
}
