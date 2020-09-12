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


int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<ii> inter;
		foru(i,0,n){
			int a,b; cin >> a >> b;
			inter.pb(make_pair(b,a));	
		}
		
		sort(inter.begin(),inter.end());
		int aux = -INF;
		int bombas = 0;
		
		forall(it,inter){
			
			if(aux < it->snd){
				bombas++;
				aux = it->fst;
			}
	 	}
		
		pt(bombas);
		
	}
}