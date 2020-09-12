#include<bits/stdc++.h>
using namespace std;
#define foru(i,a,b) for(int i=(a); i<(b); i++)
#define forb(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define pt(x) cout << x << "\n"
typedef long long int ll;
map<ll,ll> pares;
map<ll,ll> impares;

int main(){
	
	ios::sync_with_stdio(0);
  	ll t,n; cin >> t;
  	ll cantPares,cantImpares;
  	ll conjuntosPares, conjuntosImpares;
  	ll x;
  	
  	while(t--){
  		
  		cin >> n;
  		pares.clear(); impares.clear();
		conjuntosPares = conjuntosImpares = 0; cantPares = cantImpares = 0;
  		
  		while(n--){
  			cin >> x;
			if(x&1){
				impares[x]++;
				cantImpares++;
			}
			else{
				pares[x]++;
				cantPares++;
			}
  		}
  		
  		conjuntosPares = (cantPares-1)*(cantPares)/2;
  		ll antNum = -1; ll llave,num,ant = -1;
  		forall(it,pares){
  			
  			num = it->second; llave = it->first;
  			if(ant != -1){
  				if((llave^ant) == 2) conjuntosPares -= num*antNum;	
  			}
  			if(num > 1) conjuntosPares -= (num-1)*num/2;
  			
  			ant = llave;
  			antNum = num;
  		}
  		
		  
		  
		  
		conjuntosImpares = (cantImpares-1)*(cantImpares)/2;
  		
		ant = -1; antNum = -1;
  		forall(it,impares){
			
			num = it->second; llave = it->first;
  			if(ant != -1){
  				if(abs(llave-ant) == 2 && (llave^ant) == 2) conjuntosImpares -= num*antNum;	
  			}
  			if(num > 1) conjuntosImpares -= (num-1)*num/2;
  			ant = llave;
  			antNum = num;
  		}
  		pt(conjuntosPares+conjuntosImpares);
  	}
  	
}



