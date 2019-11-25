#include <bits/stdc++.h>

using namespace std;

int sum;

int smallestSizeSubsequence(int n, vector <int> A) {

    if(sum % 2 == 0){
        return 0;
    }
    else if(A.size() > 1){
        for(int i = 0 ; i < A.size() ; i++){
            if(A[i] % 2){
                return 1;
            }

        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int A_i = 0; A_i < n; A_i++){
    	cin >> A[A_i];
        sum += A[A_i];
    }
    int result = smallestSizeSubsequence(n, A);
    cout << result << endl;
    return 0;
}

