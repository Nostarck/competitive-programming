#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long maxp = 1000000;
int criba[1000000];

void crearcriba(){
	criba[0] = criba[1] = 1;
	for(int i = 2; i <= maxp; i++){
		if(!criba[i]){
			for(int j = i+i; j <= maxp; j= j+i){
				criba[j] = 1;
			}
		}
	}
	
}

vector<ll> agregarPrimos(){
	crearcriba(); int ind = 0;
	vector<ll> p;
	for(int i = 2; i < maxp; i++){
		if(!criba[i]){
			p.push_back(i);
		}
	}
	return p;
}

bool esP(ll n){
	int raiz = sqrt(n);
	if(!(n%2)) return false;
	for(int i = 3; i <= raiz; i++,i++){
		if(!(n%i)) return false;
	}
	return true;
}


int main(){
	vector<ll> primos;
	vector<ll>::iterator up;
	ll n;
	primos = agregarPrimos();
	int t; cin >> t; 
	while(t--){
		scanf("%lld",&n);
		if(n < 999983 && binary_search(primos.begin(),primos.end(),n)){
			printf("YEAH\n");
			continue;
		}
		else if(n >= 999983 && esP(n)){
			printf("YEAH\n");
			continue;
		}
		else{
			int x = 10;
			cout << "NAA\n";
			while(x--){
				
				if(n<999983){
					up = upper_bound(primos.begin(),primos.end(),n);
					ll r = up - primos.begin();
					cout << primos[r] << " ";
					n = primos[r];
				}
				else{
					while(true){
						if(esP(n)){
							cout << n++ << " "; break;}
						else n++;
					}
					
				}
				
			}
			printf("\n");
		}
		
	
	
	}
}