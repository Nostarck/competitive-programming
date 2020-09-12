#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
	
	int T;
	int elementos,repeticiones;
	
	cin >> T;
	while(T--){
		cin >> elementos >> repeticiones;
		int largo = elementos;
        int arreglo[largo]; int arreglo2[largo];
		int numero,aux;
		for(int i = 0;i < elementos; i++){
			cin >> numero;
			arreglo[i] = numero;
		}
		long long int maximoSupremo;
		long long int maximoi, maximoTotal, maximoi2, maximoTotal2;
		long long int sumatoria;
		sumatoria = maximoi = maximoTotal = arreglo[0];
		
		for(int i = 1; i < elementos; i++){
			
			maximoi = arreglo[i] > (maximoi + arreglo[i])? arreglo[i] : maximoi + arreglo[i];
			maximoTotal = maximoi > maximoTotal? maximoi : maximoTotal;
			sumatoria += arreglo[i];
		}
		
		if(repeticiones > 1){
			
			maximoi2 = maximoi;
			maximoTotal2 = maximoTotal;
			for(int i = 0; i < elementos; i++){	
				maximoi2 = arreglo[i] > (maximoi2 + arreglo[i])? arreglo[i] : maximoi2 + arreglo[i];
				maximoTotal2 = maximoi2 > maximoTotal2? maximoi2 : maximoTotal2;
				
				
			}
			if(sumatoria <= 0){
				maximoSupremo = maximoTotal2;
			}
			else{//COMPARAR LA DIFERENCIA DE [0]1 Y [0]2
				maximoSupremo = maximoTotal2 + (sumatoria) * (repeticiones-2);
			}
		}
		else{
			maximoSupremo = maximoTotal;
		}
		
		cout << maximoSupremo << endl;
		
		
		
	}
} 
