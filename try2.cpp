#include<bits/stdc++.h>

int i, n, b[10], hoanVi[10];

void print(){
    for (i = 1; i <= n; i++)
        printf("%d ", hoanVi[i]);
    printf("\n");
}

void Try(int cnt){
    for (i = 1; i <= n; i++){
        if (!b[i]){
            b[i] = 1;
            hoanVi[cnt] = i;
            if (cnt == n) print();
            else Try(cnt + 1);
            b[i] = 0;
        }
    }
}

int main(){
    scanf("%d", &n);
    Try(1);
    return 0;
}
