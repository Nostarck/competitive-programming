#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    vector<int> v(1000001);
    for(int i = 0; i < 1000001; i++) v[i] = 0;
    //v[0] = v[999999] = 1;
    scanf("%i",&n); int aux;
    for(int i = 0; i < n; i++){
        scanf("%i",&aux);
        v[aux-1] = 1;
    }
    int posi = 0; int posj = 999999;
    int resp = 0; int secs = 1;
    while(resp < n){
        secs++;
        if(v[posi]) resp++;
        if(v[posj]) resp++;
        posi++; posj--; 
    }
    printf("%i",secs-2);
}
