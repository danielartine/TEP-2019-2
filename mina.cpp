#include <bits/stdc++.h>

using namespace std;

int matrix[1000][1000], n, m;

int solve(){

    for(int i = 0 ; i < n ; i++){

        if(!matrix[i][0]){
            matrix[i][0] = 1;
        }
    }

    for(int i = 1 ; i < m ; i++){

        if(!matrix[0][i]){
            matrix[0][i] = 1;
        }
    }

    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < m ; j++){

            if(matrix[i][j] >= 0){
                if(matrix[i-1][j] > 0){
                    matrix[i][j] = matrix[i][j] + matrix[i-1][j];
                }

                if(matrix[i][j-1] > 0){
                    matrix[i][j] = matrix[i][j] + matrix[i][j-1];
                }
            }
        }   
    }

    return matrix[n-1][m-1];
}


int main(){

    cin >> n >> m;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> matrix[i][j];
        }
    }

    cout << solve() << endl;


}
