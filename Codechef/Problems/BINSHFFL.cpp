#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t; scanf("%i",&t);
    
    while(t--){
        long long a,b; scanf("%lld %lld",&a,&b);
        long long c = b-1;
        
        int i,unosa = 0, unosc = 0;
        for(i = 0; i < 64; i++){
            unosa += (1LL<<i & a)? 1 : 0;
            unosc += (1LL<<i & c)? 1 : 0;
        }
        
        if((!b && a) || (b == 1 && a > 1)) printf("-1\n");
        else if(a == b) printf("0\n");
        else printf("%i\n",(unosa>unosc? 2 : unosc-unosa + 1));
    }
}
