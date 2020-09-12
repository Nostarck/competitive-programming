#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n,m;
	cin >> n >> m;
	
	string servidores[n][2];
	string copias[m][2];
	string respuestas[m];
	
	for(int i = 0; i < n; i++){
		cin >> servidores[i][0] >> servidores[i][1];
	}
	for(int i = 0; i < m; i++){
		cin >> copias[i][0] >> copias[i][1];
	}
	
	int contadorR = 0;
	for(int i = 0; i < m; i++){
		
		for(int j = 0; j < n; j++){
			if(copias[i][1] == servidores[j][1]+";"){					
				//respuestas[contadorR++] = 
				cout << copias[i][0] + " " +copias[i][1]+" #"+servidores[j][0] << endl;
			}
		}
		//cout << respuestas[i] << endl;
	}
	//for(int i = 0; i < m; i++){
	//	cout << respuestas[i] << endl;
	//}

}
