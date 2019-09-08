#include <bits/stdc++.h>

int memo[205][10005], outro_memo[205][10005], tam_balsa, n, carro[2005], tot[2005], max_carro, max_tam, pos[205];

int main() {

    memo[0][0] = 1;
     
    scanf("%d", &tam_balsa);
    scanf("%d", &n);

    tam_balsa *= 100;

    for(int i = 1 ; i <= n ; i++){
        scanf("%d",&carro[i]);
        tot[i] = tot[i-1] + carro[i]; 
    }
    
    for(int i = 1 ; i <= n; i++)
        for(int j = 0; j <= tam_balsa; j++) {
            if(j-carro[i] >= 0 and memo[i-1][j-carro[i]]) 
                memo[i][j] = 1, outro_memo[i][j] = 0;

            if(tot[i]-j <= tam_balsa and memo[i-1][j]) 
                memo[i][j] = 1, outro_memo[i][j] = 1;

            if(memo[i][j])
                max_carro = i, max_tam = j;
        }

    for(int i = max_carro ; i > 0 ; i--){ 
        pos[i] = outro_memo[i][max_tam];
        if(outro_memo[i][max_tam] == 0)
            max_tam -= carro[i];
    }

    printf("%d\n", max_carro);

    for(int i = 1; i <= max_carro; i++)
        if(pos[i])
            printf("esquerda\n");
        else
            printf("direita\n");
}
