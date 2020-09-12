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
ll potencias[31];
ll arr[120100];
map<ll,ll> m;
int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	
	
	int p = 0;
	//cout << ((long long)(1<<30)) << endl;
	while(p<31){
		potencias[p] = 1<<p;
		p++;
	}
	
	int n; cin >> n;
	foru(i,0,n){
		cin >> arr[i];
		m[arr[i]]++;
	}	
	
	int r = 0;
	foru(i,0,n){
		
		bool encontro = false;
		foru(pot,0,31){
			ll buscar = potencias[pot] - arr[i];
			if(buscar > 0){
				if(m.count(buscar)){
					if(arr[i] == buscar && m[arr[i]] == 1) continue;
					else{
						encontro = true;
					}
				}
			}
		}
		if(!encontro) r++;
	}
	pt(r);
	
	
		 	
}
