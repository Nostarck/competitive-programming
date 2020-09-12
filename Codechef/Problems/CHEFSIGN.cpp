#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
    
    int casos,necesito,j;
    cin >> casos;
    cin.clear();
    cin.ignore();
    while(casos > 0){
        string signos = "";
        getline(cin,signos);
        int largo = signos.length();
        int i = 0;
        int maximo = 1;
        while(i < largo){
            if(signos[i] != '='){
                necesito = 0;
                j = i;
                while(j < largo){
                    if(signos[i] != signos[j] && signos[j] != '='){
                        break;
                        }
                    else if(signos[i] == signos[j]){
                        necesito += 1;
                        }
                    j += 1;
                    }
                necesito += 1;
                maximo = (maximo+necesito + abs(maximo-necesito)) / 2;
                i += j-i;
                }
            else{
                i += 1;
                }
        }
        cout << maximo << endl;
        casos--;
        }
    }