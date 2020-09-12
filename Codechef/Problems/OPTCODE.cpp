	#include<bits/stdc++.h>
	using namespace std;
	long long int mayores[3][2];
		
	void busqueda(int indice,int valor){
		//busco por indice
		bool salir = false;
		for(int i = 0; i < 3 && !salir; i++){
			if(mayores[i][0] == indice){
				salir = true;
				if(valor > mayores[i][1]) mayores[i][1] = valor;
			}
		}
		if(!salir){//no encontro el indice, ahora a buscar por algun valor
			if(valor > mayores[0][1] && valor <= mayores[1][1]){
				mayores[0][1] = valor; mayores[0][0] = indice;
			}
			else if(valor > mayores[1][1] && valor <= mayores[2][1]){
				mayores[0][1] = mayores[1][1]; mayores[0][0] = mayores[1][0];
				mayores[1][1] = valor; mayores[1][0] = indice;
			}
			else if(valor > mayores[2][1]){
				mayores[0][1] = mayores[1][1]; mayores[0][0] = mayores[1][0];
				mayores[1][1] = mayores[2][1]; mayores[1][0] = mayores[2][0];
				mayores[2][1] = valor; mayores[2][0] = indice;
			}
		}
	}
	 
	int main(){
	 
		int T;
		cin >> T;
			while(T--){
				int N;
				cin >> N;
				long long int x,y;
			
				for(int i = 0; i < 3; i++){
					for(int j = 0; j < 2; j++){
						mayores[i][j] = 0;
					}
				}
			
				for(int i = 0 ; i < N; i++){
					cin >> x >> y;
					busqueda(x,y);
				}
				
				
				cout << ((mayores[0][1] && mayores[1][1] && mayores[2][1]) ? (mayores[0][1] + mayores[1][1] + mayores[2][1]) : 0) << endl;
			
		}
	}