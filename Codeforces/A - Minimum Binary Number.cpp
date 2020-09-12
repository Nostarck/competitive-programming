#include<bits/stdc++.h>
using namespace std;

int main(){
    int l; scanf("%i",&l);
    char s[l+3]; scanf("%s",&s);
    
    int elim = 0;
    for(int i = 1; i < l; i++){
        if(s[i] == '1') elim++;
    }
    //string resp = ""+s[0];
    printf("%c",s[0]);
    for(int i = 0; i < l-elim-1; i++){
        printf("0");
    }
    
    return 0;
}
