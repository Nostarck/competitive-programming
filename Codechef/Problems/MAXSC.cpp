#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
	
	int T,N;
	
	cin >> T;
	while(T--){
		cin >> N;
		int arreglo[N][N];
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				cin >> arreglo[i][j];
			}
			//sort(arreglo[i],arreglo[i]+N);
		}
		sort(arreglo[N-1],arreglo[N-1]+N);
		int mayorActual,mayorAnterior;
		long long int suma;
		suma = mayorActual = mayorAnterior = 0;
		bool encontro = true;
		mayorAnterior = arreglo[N-1][N-1];
		
		for(int i = N-2; i >= 0 && encontro; i--){
			mayorActual = 0;
			for(int j = 0; j < N; j++){
				if(arreglo[i][j] > mayorActual && arreglo[i][j] < mayorAnterior){
					mayorActual = arreglo[i][j];
				}
			}
			if(!mayorActual) encontro = false;
			else{
				suma += mayorAnterior;
				mayorAnterior = mayorActual;
			}
		}
		suma += mayorAnterior;
		if(!encontro) suma = -1;
		cout << suma << endl;
	}
}  