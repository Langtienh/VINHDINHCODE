#include<bits/stdc++.h>
#define ll long long

using namespace std;

double n, s = 0;

void tinhCan(){
    for (int i = 1; i <= n; i++)
        s = sqrt(s) + i;
    s = sqrt(s);
}

int main(){
    scanf("%lf", &n);
    tinhCan();
    printf("%.3lf", s);
    return 0;
}