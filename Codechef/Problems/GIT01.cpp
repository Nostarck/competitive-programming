

#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
	
	
	int cases,niveles,cerezas;
	int costoA,costoB;
	char elemA, elemB, anteriorA, anteriorB;
	
	string linea;
	cin >> cases;
	while(cases--){
		
		cin >> niveles >> cerezas;
		//string linea[niveles]
		char linea[niveles][cerezas+1];
		for(int i = 0; i < niveles; i++){
			scanf("%s",linea[i]);
		}
		
		//empiez el conteo
		costoA = costoB = 0;
		elemA = anteriorA = 'R';
		elemB = anteriorB = 'G';
		for(int i = 0; i < niveles; i++){
			for(int j = 0; j < cerezas; j++){
				if(linea[i][j] != elemA){
					costoA = elemA == 'R'? costoA + 3 : costoA + 5;
				}
				if(linea[i][j] != elemB){
					costoB = elemB == 'R'? costoB + 3 : costoB + 5;
				} 
				elemA = elemA == 'R'? 'G':'R';
				elemB = elemB == 'R'? 'G':'R';
			}
			anteriorA = elemA = anteriorA == 'R'? 'G':'R';
			anteriorB = elemB = anteriorB == 'R'? 'G':'R';
		}
		if(costoA >= costoB){
			cout << costoB << endl;
		}
		else{
			cout << costoA << endl;
		}
		//cin >> costoA;
		
	}
	
	return 0;
}












