#include<bits/stdc++.h>
using namespace std;
char s[110];
int main(){
    
    scanf("%s",s);
    int i = 1; bool dang = false; int cont = 1; 
    while(s[i] && !dang){
    	if(!dang) dang = cont >= 7;
        if(s[i] == s[i-1]) cont++;
        else cont = 1;
        i++;
    }
    if(!dang) dang = cont >= 7;
    cout << (dang? "YES" : "NO") << endl;
}
