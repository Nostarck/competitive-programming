#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
	
	int n,q;
	scanf("%i %i",&n,&q);
	int arr[n];
	int dp[n][31]; 
	
	scanf("%i",&arr[0]);
	dp[0][0] = !(arr[0] & (1 << 0));
	for(int i = 1; i < 31; i++) dp[0][i] = !(arr[0] & (1 << i));
	
	
	for(int i = 1; i < n; i++){
		scanf("%i",&arr[i]);
		for(int exp = 0; exp < 31; exp++){
			dp[i][exp] = !(arr[i] & (1 << exp)) ? dp[i-1][exp]+1 : dp[i-1][exp]; 
		}	
	}
	
	int l,r;
	while(q--){
		
		scanf("%i %i",&l,&r);
		l--; r--;
		int mitad = (r-l+1)/2;
		int resultado = 0; int apagados; int op;
		for(int bit = 0; bit < 31; bit++){
			if(resultado+(1<<bit) <= 2147483648){
				apagados = !l? dp[r][bit] : dp[r][bit] - dp[l-1][bit]; 
				if(apagados > mitad) resultado += (1<<bit);
			}
			else break;
		}
		
		printf("%i\n",resultado);
	
	}
}  