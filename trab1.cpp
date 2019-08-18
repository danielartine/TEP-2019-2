#include <bits/stdc++.h>

int main(){
    long n, anoNascimento[10000], anoMorte[10000], maximoPessoas = 0, maximoPessoasAno, anoMinimo = 10000000, anoMaximo = -1000000, numVivos;
    scanf("%ld",&n);
    for(long i = 0 ; i < n ; i++){
        scanf("%ld %ld",&anoNascimento[i],&anoMorte[i]);
        anoMinimo = anoNascimento[i] < anoMinimo ? anoNascimento[i] : anoMinimo;
        anoMaximo = anoMorte[i] > anoMaximo ? anoMorte[i] : anoMaximo;
    }

    for (long i = anoMinimo ; i <= anoMaximo; i++) {
        numVivos = 0;
        for (long j = 0 ; j < n ; j++) {
            if (anoNascimento[j] <= i and i <= anoMorte[j]) {
                numVivos++;
            }
        }
        if (numVivos > maximoPessoas) {
            maximoPessoas = numVivos;
            maximoPessoasAno = i;    
        }
    }
    printf("%ld\n", maximoPessoasAno);
}
