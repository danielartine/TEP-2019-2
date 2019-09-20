#include <bits/stdc++.h>

using namespace std;

int vals[1000], pesos[1000], n, tam, resps[1000];

int main() {

    scanf("%d", &n);
    scanf("%d", &tam);

    for(int i = 0 ; i < n ; i ++)
        scanf("%d %d",&vals[i], &pesos[i]);

    int tam_aux, resp = 0;

    for(int i = 0 ; i < n ; i++){

        tam_aux = tam;

        if(pesos[i] <= tam_aux){ 
            resp += vals[i];
            tam_aux -= pesos[i];
        }

        for(int j = i+1 ; j < n ; j++){
            if(pesos[j] <= tam_aux){
                resp += vals[j];
                tam_aux -= pesos[j];
            }
        }

        resps[i] = resp; 
        resp = 0;
    }

    sort(resps, resps+n, greater<int>()); 
    printf("%d\n",resps[0]);
}

//Com certeza problemático, a complexidade está quadrática e casos específicos continuam sem passar no teste.
//Não consegui pensar em uma abordagem recursiva para o problema até o prazo.

/*Casos testados:

1)
3 50
60 10
100 20
120 30

Rodou sem problemas e rápido.

2)
10 50
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10

Também não houveram problemas performáticos.

99 200
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30
60 10
100 20
120 30

O cálculo já não era mais feito.
*/

