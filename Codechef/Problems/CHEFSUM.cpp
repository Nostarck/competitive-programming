
#include <iostream>



using namespace std;

int main(){
    
    int cases;
    cin >> cases;
    
    while(cases > 0){
        
        int largo;
        cin >> largo;
        
        int array[largo];
        //int resultados[largo];
        for(int i = 0; i < largo; i++) cin >> array[i];
        
        //for(int i = 0; i < largo; i++) resultados[i] = prefix(array,i) + suffix(array,i,largo);
        
        int respuesta = 1;
        for(int i = 0; i < largo; i++){
           respuesta = array[i] < array[respuesta-1] ? i+1 : respuesta;
        }
        
        cout << respuesta << endl;
        
        cases--;
    }
    
}