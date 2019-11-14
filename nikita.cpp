#include <bits/stdc++.h>

using namespace std;

int t, n, input;


int calc_sum(vector<int> arr){
    
    int soma = 0;

    for (int i = 0; i < arr.size(); i++){
        soma += arr.at(i);
    }


    return soma;
}

int solve(vector<int> arr){

    int size = arr.size();

    //cout << size << endl;

    if(size == 1){
        return 0;
    }

    int soma_aux = calc_sum(arr);

    if(soma_aux % 2 == 1){
        return 0;
    }

    int soma_real = arr.at(0);

    for (int i = 1; i < size; i++){

        if (soma_real * 2 == soma_aux){

            vector<int> arr_esq, arr_dir;

            for(int j = 0 ; j < i ; j++){
                arr_esq.push_back(arr.at(j));
            }

            for(int j = i ; j < size ; j++){
                arr_dir.push_back(arr.at(j));
            }

            return max(solve(arr_esq),solve(arr_dir)) + 1;
        }

        soma_real += arr.at(i);
    }

    return 0;
}

int main(){

    cin >> t;

    while (t--){

        cin >> n;

        vector<int> arr;

        for (int i = 0; i < n; i++){
            cin >> input;
            arr.push_back(input);
        }

        cout << solve(arr) << endl;

    }
}