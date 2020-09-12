

#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>
int root[100005];
map<int,int> sol;
int Find(int a){
	if(root[a] == a) return a;
	return root[a] = Find(root[a]);
}

void Union(int a, int b){
	int u,v;
	u = Find(a); v = Find(b);
	root[u] = v;
}

//UnionFind + mapa

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int t; cin >> t;
	int a,b,n,m;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i<=n ;i++){
			root[i] = i;
		}
		while(m--){
			cin >> a >> b;
			Union(a,b);
		}
		
		for(int i = 1; i <= n; i++){
			sol[Find(root[i])]++;
		}
		
		ll solution = 1;
		for(map<int,int>::iterator it = sol.begin(); it != sol.end(); it++){
			solution = (solution*it->second)%MOD;
		}
		cout << sol.size() << " " << solution << "\n";
		sol.clear();
	}
}





