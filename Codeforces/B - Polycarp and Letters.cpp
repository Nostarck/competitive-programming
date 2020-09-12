#include<bits/stdc++.h>
using namespace std;

int main(){
    //printf("%i",'a'-97);
    int l; scanf("%i",&l);
    char s[l+3]; scanf("%s",&s);
    int respuesta = 0; int cuenta;
    for(int i = 0; i < l; i++){
        cuenta = 0;
        if(s[i] >= 97){
            cuenta = 1; int abc[27]; for(int ind = 0; ind < 27; ind++) abc[ind] = 0;
            abc[s[i] - 97]++;
            for(int j = i+1; j < l; j++){
                if(s[j] >= 97 && !abc[s[j] - 97]){
                    cuenta++; abc[s[j] - 97]++;
                }
                else if(s[j] < 97){
                    break;
                }
            }
            
        }
        if(cuenta > respuesta) respuesta = cuenta;
    }
    printf("%i",respuesta);
    
    return 0;
}
