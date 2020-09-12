

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
//static_cast<double>

unordered_map<int,map<int,int>> color;
map<pair<int,int>,int> dp;
int Find(int a, int c){
	
	if(color[c][a] == a) return a;
	else return color[c][a] = Find(color[c][a],c);
}

void Union(int a,int b,int c){
	int u = Find(a,c);
	int v = Find(b,c);
	color[c][u] = v;
}

int sameSet(int a, int b, int c){
	int u = Find(a,c);
	int v = Find(b,c);
	return u==v? 1 : 0;
}

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	
	int a,b,c;
	
	for(int i = 0; i < m; i++){
		cin >> a >> b >> c;
		
		if(!color.count(c)){
			color.insert(make_pair(c,map<int,int>()));
			color[c].insert(make_pair(a,a));
			color[c].insert(make_pair(b,b));
		}
		else{
			if(!color[c].count(a)) color[c].insert(make_pair(a,a));
			if(!color[c].count(b)) color[c].insert(make_pair(b,b));
		}	
		Union(a,b,c);
	}
	
	int q; cin >> q;
	while(q--){
		cin >> a >> b;
		
		if(dp.count(make_pair(min(a,b),max(a,b)))) cout << dp[make_pair(min(a,b),max(a,b))] << "\n";
		else{
			int aux = 0;
			for(unordered_map<int,map<int,int>>::iterator it=color.begin(); it != color.end(); it++){
				if(it->second.count(a) && it->second.count(b)){
					aux += sameSet(a,b,it->first);
				}
			}	
			dp.insert(make_pair(make_pair(min(a,b),max(a,b)),aux));
			cout << aux << "\n";
		}
	}
	
	
	
}














