#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b,i,x; scanf("%i",&t);
    double proba,probb;
    while(t--){
        scanf("%i %i %i",&n,&a,&b);
        proba = probb = 0;
        for(i = 0; i < n; i++){
            scanf("%i",&x);
            if(x == a) proba++;
            if(x == b) probb++;
        }
        proba /= n; probb/=n;
        printf("%lf\n",(proba*probb));
        
    }
    
    
    
}

