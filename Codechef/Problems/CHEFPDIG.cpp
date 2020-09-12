#include <string>
#include <iostream>
using namespace std;
int main(){
    
    int numeros[9];
    string N;
    int casos;
    int cuenta;
    string s;
    
    cin >> casos;
    cin.clear();
    cin.ignore();
    while(casos--){
        for(int i = 0; i < 10; i++) numeros[i] = 0;
        s = "";
        cin >> N;
        cuenta = 0;
        while(N[cuenta]){
            numeros[(int)N[cuenta]-48]++;
            cuenta++;
            
        }
        for(int i = 65; i < 91; i++){
            if(i != 66 && i != 77 && i != 88){
                
                if(numeros[i/10] && numeros[i%10]) s += (char)i;
            }
            else{
                if(numeros[i%10] > 1) s += (char)i;
            }
            
        }
        
        if(s != "") cout << s << endl;
        else cout << "\n";
        
    }
}
