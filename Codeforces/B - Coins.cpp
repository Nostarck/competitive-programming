#include <bits/stdc++.h>
using namespace std;    


int main(){
    int v[3] = {15,15,15}; int c[3] = {'A','B','C'};
    char st[3][4]; int suma = 8;
    bool possible = true;
    
    for(int i = 0 ; i < 3; i++,suma/=2){
        cin >> st[i];
        if(v[st[i][0] - 65] == v[st[i][2] - 65]){
            if(st[i][1] == '>') v[st[i][0] - 65] = v[st[i][2]- 65] + suma;
            else v[st[i][2] - 65] = v[st[i][0]- 65] + suma;
        }
        else if(st[i][1] == '>' && v[st[i][0] - 65] < v[st[i][2] - 65]) v[st[i][0] - 65] = v[st[i][2]- 65] + suma;  
        else if(st[i][1] == '<' && v[st[i][0] - 65] > v[st[i][2] - 65]) v[st[i][2] - 65] = v[st[i][0]- 65] + suma;
        
    }
    
    for(int i = 0; i < 3 && possible; i++){
        if(st[i][1] == '>' && v[st[i][0] - 65] < v[st[i][2] - 65]) possible = false;
        if(st[i][1] == '<' && v[st[i][0] - 65] > v[st[i][2] - 65]) possible = false;
    }
    
    int aux;
    char auxc;
    if(possible){
        for(int i = 0; i < 3; i++){
            for(int j = i+1; j < 3; j++){
                if(v[i] > v[j]){
                    aux = v[i]; v[i] = v[j]; v[j] = aux;
                    auxc = c[i]; c[i] = c[j]; c[j] = auxc;
                }
            }
        }
        cout << char(c[0]) << char(c[1]) << char(c[2]) << endl;
        
    }
    
    else cout << "Impossible\n"; 
    
            
}
