#include <iostream>

using namespace std;

long long f[41];
int n;

int main() {
    cin >> n; f[0] = 0, f[1] = 1;
    for(int i=2; i<=n; ++i) f[i] = f[i-1] + f[i-2];
    cout << f[n];
    return 0;
}
    
