#include <bits/stdc++.h>

using namespace std;

int vals[1000], pesos[1000], n, tam;

int knapsack(int indice, int tam) {
    if (indice < 0)
        return 0;
    if (pesos[indice] > tam)
        return knapsack(indice-1, tam);
    else 
        return max(knapsack(indice-1, tam), knapsack(indice-1, tam - pesos[indice]) + vals[indice]);

}

int main() {

    scanf("%d", &n);
    scanf("%d", &tam);

    for(int i = 0 ; i < n ; i ++)
        scanf("%d %d",&vals[i], &pesos[i]);

    printf("%d\n", knapsack(n-1, tam));
}

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

