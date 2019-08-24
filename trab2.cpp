#include <bits/stdc++.h>

using namespace std;

int memo[1000000];

long f(long x) {
    //Seguindo lógica de bitwise ao invés de fazer mod
    return (x & 1) == 0 ? x / 2 : 3 * x + 1;
}


long g(long v) {

    int valorDeMemo, res;

    if(v > 1000000)
        valorDeMemo = 0;

    else
        valorDeMemo = memo[v];

    if (valorDeMemo) 
        return valorDeMemo;

    res = v == 1 ? 1 : 1 + g(f(v));

    if (v <= 1000000) 
        memo[v] = res;

    return res;

}


int main(){
    long min, max, resp, respTam = 0, termoSeguinteTam;
    scanf("%ld %ld",&min,&max);
    for(long i = min ; i <= max ; i++){
        termoSeguinteTam = g(i);
        if(termoSeguinteTam > respTam){
            resp = i;
            respTam = termoSeguinteTam;
        }
    }
    
    printf("Termo: %d - Tamanho Seq: %d\n", resp, respTam);

}
