#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define foru(i,a,b) for(int i=(a); i<(b); i++)
#define forue(i,a,b) for(int i=(a); i<=(b); i++)
#define forb(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define pt(x) cout << x << "\n"
#define sz(c) ((int)c.size())
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;

map<ll,ll> dp;
ll parada;

ll digitsum(ll numero){
	ll suma = 0;
	while(numero>0){
		suma += numero%10;
		numero/=10;	
	}
	return suma;
}

ll valor(ll numero){
	while(numero >= 10) numero = digitsum(numero);
	return numero;
}

ll menor(ll n,ll d){
	
	ll paro = valor(n);
	ll menor = paro;
	ll aux;
	
	n+=d;
	while(true){
		aux = valor(n);
		menor = min(menor,aux);
		if(aux == paro) break;
		n+=d;
	}
	return menor;
}

ll solve(ll x, ll d){
	ll r;
	if(valor(x) == parada){
		ll pasosExtra = 0;
		while(x >= 10){
			x = digitsum(x);
			pasosExtra++;	
		}
		return pasosExtra;
	}
	
	if(dp[x]) return dp[x];
	if(x >= 10){
		r = 1 + min(solve(x+d,d),solve(digitsum(x),d));	
	}
	else r = 1 + solve(x+d,d);
	
	return dp[x] = r;
}

int main(){
	
	ios::sync_with_stdio(0);
	
	int t; cin >> t;
	ll n,d;
	while(t--){
		cin >> n >> d;
		dp.clear();
		parada = menor(n,d);
		cout << parada << " " << solve(n,d) << "\n";
	}
}