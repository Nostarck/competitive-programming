#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int largo =  s.length();
    int p,l;
    p = l = 0;
    
    for(int i = 0; i < largo; i++){
        if(s[i] == 'o') p++;
        else if(s[i] == '-') l++;
    }
    if(!p) printf("YES");
    else printf("%s",(l%p == 0? "YES" : "NO"));
    return 0;
    
}

    
    


