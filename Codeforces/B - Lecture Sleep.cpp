//http://codeforces.com/problemset/problem/961/B
#include<bits/stdc++.h> 
using namespace std;


int main(){
    
    int n,k; scanf("%i %i",&n,&k);
    int suma = 0;
    int lecturas[n+5]; int estado[n+5];
    int dp[n+5]; 
    for(int i = 0; i < n; i++){
        scanf("%i",&lecturas[i]);
        dp[i] = 0;
    }
    scanf("%i",&estado[0]);
    if(estado[0]){
        suma += lecturas[0];
        dp[0] = 0;
    }
    else{
        dp[0] = lecturas[0];
    }
    for(int i = 1; i < n; i++){
        scanf("%i",&estado[i]);
        if(estado[i]){
            suma += lecturas[i];
            dp[i] = dp[i-1];
        }
        else dp[i] = dp[i-1] + lecturas[i];
        
    }
    int resp = dp[k-1];
    for(int i = k; i < n; i++){
        if(dp[i] - dp[i-k] > resp) resp = (dp[i] - dp[i-k]);
    }
    resp += suma;
    printf("%i\n",resp);
    
    
    
}
