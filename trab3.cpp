#include <bits/stdc++.h>

using namespace std; 
  
int solve(int in[], int inf, int sup)  {  
    if (sup == inf)
        return in[inf];

    int mid = inf + (sup - inf) / 2;
  
    if (mid < sup and in[mid + 1] < in[mid])  
        return in[mid + 1];  
  
    if (mid > inf and in[mid] < in[mid - 1])  
        return in[mid];  
  
    if (in[sup] > in[mid])  
        return solve(in, inf, mid - 1);  

    return solve(in, mid + 1, sup);  

}  
  
int main()  {
    int n, in[10000];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&in[i]);
    }
    printf("%d\n",solve(in, 0, n-1));  
  
}  
  
  
