//http://codeforces.com/problemset/problem/967/B
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,s; scanf("%i %i %i",&n,&a,&b);
    int p,v[--n]; scanf("%i",&p);
    s = p;
    for(int i = 0; i < n; i++){
        scanf("%i",&v[i]); s+=v[i];
    }
    
    int r = n-1;
    sort(v,v+n);
    while((p*a) / s < b){
        s -= v[r--];
    }
    
    printf("%i",n-(r+1));
    
    
    return 0;
}


