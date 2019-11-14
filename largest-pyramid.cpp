#include <bits/stdc++.h>
using namespace std;

int q, n , m , k, resp, mat[500][500];

bool ehValido(int x , int y , int s , int pt) {
    int chk = 0, v;
    for(int i = x ; i <= x + s - 1 ; i++)
        for(int j = y ; j <= y + s - 1 ; j++) {
            v = min(min(i - x + 1, j - y + 1), min((2 * pt) - (i - x + 1), (2 * pt) - (j - y + 1)));
            if(mat[i][j] > v)
                return false;
            chk += v - mat[i][j];    
        }
    return chk <= k;
}

int main() {
    scanf("%d" , &q);
    while(q--) {
        int resp = 0;
        scanf("%d %d %d" , &n , &m , &k);
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= m ; j++)
                scanf("%d" , &mat[i][j]);
        for(int i = 1 ; i <= n; i++) 
            for(int j = 1 ; j <= m; j++)
                for(int s = resp + 1 ; i + (s * 2) - 2 <= n and j + (s * 2) - 2 <= m ; s++)
                    if(ehValido(i, j, (s * 2) - 1, s))
                        resp = max(resp, s);
        printf("%d\n", resp);
    }
}
