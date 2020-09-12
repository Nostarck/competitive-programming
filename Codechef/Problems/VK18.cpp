//https://www.codechef.com/problems/VK18
#include<bits/stdc++.h>
using namespace std;
int largo = 2000020;


int sacar_cuarto(int numero){
    
    int diamantes = 0, mod;
    while(numero != 0){
        diamantes += (mod = numero%10) % 2 ? -mod : mod;
        numero/=10; 
    }
    
    return  diamantes < 0? diamantes*-1 : diamantes;
}

int main(){
    int i;
    vector<long long int> v(largo);
    vector<long long int> r(1000001);
   
    v[0] = 0;
    for(i = 1; i < largo; i++) v[i] = v[i-1] + sacar_cuarto(i);
    
    
    r[0] = 0; r[1] = 2;
    for(int i = 2; i < 1000001; i++){
        r[i] = r[i-1] + (v[i+i] - v[i]);
        r[i] += v[i*2 - 1] - v[i] ;
    }
    
    int t,n; scanf("%i",&t);
    while(t--){
        scanf("%i",&n);
        printf("%lld\n",r[n]);
    }
    
    return 0;
}
