//http://codeforces.com/problemset/problem/950/B
#include<bits/stdc++.h>
using namespace std;

int main(){
 //   7 6
//2 5 3 1 11 4 4
//7 8 2 4 1 8

    int n,m; scanf("%i %i",&n,&m);
    int arr1[n+2]; for(int i = 0; i < n; i++) scanf("%i",&arr1[i]);
    int arr2[m+2]; for(int i = 0; i < m; i++) scanf("%i",&arr2[i]);
    
    int respuesta = 0;
    int i1,i2; i1 = i2 = 0;
    int suma1,suma2; suma1 = suma2 = 0;
    suma1 = arr1[0]; suma2 = arr2[0];
    while(i1 < n && i2 < m){
        if(suma1 < suma2) suma1 += arr1[++i1];
        else if(suma2 < suma1) suma2 += arr2[++i2];
        else{
            respuesta++;
            suma1 += arr1[++i1];
            suma2 += arr2[++i2];
            
        }
    }
    printf("%i",respuesta);
    
    
}
