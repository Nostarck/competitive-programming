#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t; scanf("%i",&t);
	while(t--){
		
		double recetas[3]; double resultado = 0;
		int c; scanf("%i",&c);
		while(c--){
		
			for(int i = 0; i < 3; i++) scanf("%lf",&recetas[i]);
			double precioFinal = recetas[0] + (recetas[0] * (recetas[2] / 100.0));
			precioFinal -= (precioFinal * (recetas[2] / 100.0));
			precioFinal = (recetas[0] - precioFinal) * recetas[1];
			resultado += precioFinal;
		}

		printf("%lf\n",resultado);
		
	}
	
}