#include<bits/stdc++.h>
using namespace std;


int main(){
    
    string s; cin >> s;
    int largo = s.length();
    bool resp = true;
    for(int i = 0;  i < largo && resp; i++){
        
        for(int j = i+1; j < largo && resp; j++){
            
            int cuenta = 0; bool pal = true;
            int largo2 = j-i;
            for(int k = 0; k <= largo2 && pal; k++){
                
                if(s[i+k] != s[j-k]) pal = false;
                cuenta++;
            }
            if(pal){
                if(!(cuenta%2)) resp = false;
            }
        
        }
        
    }
    if(resp) printf("Odd.");
    else printf("Or not.");
    
}
