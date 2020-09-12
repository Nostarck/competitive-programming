#include <bits/stdc++.h>
using namespace std;

char c[2][7];

int main(){
	int b,o,aux;;
	int t; cin >> t;
	while(t--){
		
		b = 0; o = 0, aux = 0;
		for(int i = 0; i < 2; i++) cin >> c[i];
		
		for(int i = 0; i < 3; i++){
			if(c[0][i] == 'b' || c[1][i] == 'b') b++; 
			else if(c[0][i] == 'o' || c[1][i] == 'o') o++;
			if(c[0][i] == 'o' || c[1][i] == 'o') aux = 1;
		}
		
		cout << (b == 3 && aux || b == 2 && o == 1? "yes\n" : "no\n"); 
		
	}
	
	return 0;	
}