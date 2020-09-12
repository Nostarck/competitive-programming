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
#define add(a, b, w) g[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;

//i,anterior, g++ -std=c++11 Woodcutters-545.cpp -o p

map<pair<ll,ll>,ll> dp;

int arboles[800010];
int alturas[800010];
int n;

ll maxi(ll a, ll b){return (a>b)? a:b;}

ll solve(ll i, ll anterior){

	if(i == n-1) return 1;
	if(dp.count(make_pair(i,anterior))) return dp[make_pair(i,anterior)];
	ll solucion = 0;
	ll r1,r2; r1 = r2 = 0;
	// no se corta
	r1 = solve(i+1,arboles[i]);
	if(arboles[i]-alturas[i] > anterior){
		r1++;
	}
	if(arboles[i]+alturas[i] < arboles[i+1]){
		r2 = 1 + solve(i+1,arboles[i]+alturas[i]);
	}
	solucion = maxi(r1,r2);
	dp.insert(make_pair(make_pair(i,anterior),solucion));
	return solucion;

}

int main(){
	
	cin >> n;
	foru(i,0,n){

		cin >> arboles[i] >> alturas[i];
		
	}
	arboles[n] = INF;

	pt(solve(0,-INF));


}
