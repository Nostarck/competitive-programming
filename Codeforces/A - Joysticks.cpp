#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,r = 0; scanf("%i %i",&a,&b);
    if(a < 2 && b < 2) a = 0;
    while(a && b){
        if(a == b || a < b){
            a++ ; b -= 2;
        }
        else{
            b++; a -= 2;
        }
        r++;
    }
    printf("%i",r);
}
