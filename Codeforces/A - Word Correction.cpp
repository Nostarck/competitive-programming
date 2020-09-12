#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; scanf("%i",&n);
    char s[n]; scanf("%s",&s);
    bool hayvocal = false;
    for(int i = 0; i < n; i++){
        if((s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117 || s[i] == 121) && !hayvocal){
            hayvocal = true;
            printf("%c",s[i]);
        }
        if((s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117 || s[i] == 121) && hayvocal){
            //
        }
        else{
            hayvocal = false;
            printf("%c",s[i]);
        }
    }
    
    
}
