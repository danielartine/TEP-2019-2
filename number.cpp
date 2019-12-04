#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, tam, soma = 0, aux;
    cin >> t;
    while(t--){
      cin >> n;
      vector<int> a(n);
      for(int i = 0; i < n; i++){
            cin >> a[i];
      }
      tam = a.size();
      soma = 0;
    
      for(int i = 0; i < n; i++){
            aux = a[i];
            while(aux){
                  soma += aux % 10;
                  aux /= 10; 
            }
      }

      if(soma % 3){
            cout << "No" << endl;
      }

      else{
            cout << "Yes" << endl;
      }

    }
    return 0;
}
