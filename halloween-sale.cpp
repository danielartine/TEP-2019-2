#include <bits/stdc++.h>

int main() {
    int p, d, m, s, resp = 0, aux_p;
    scanf("%d %d %d %d", &p, &d, &m, &s);
    aux_p = p;
    while(s >= aux_p){
        resp++;
        s -= aux_p;
        if(aux_p - d >= m)
            aux_p = aux_p - d;
        else
            aux_p = m;
    }
    printf("%d\n", resp);
}
