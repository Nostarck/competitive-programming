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
map<ll,pair<int,ii>> m;
int suma[3][300000];

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	vector<int> r,l;
  	int n; cin >> n;
	int x; char op;
	int ind = 0;
	foru(i,0,n){
		cin >> op >> x;
		if(op == '?'){	
			
			pair<int,ii> aux = m[x];
			pt(min(aux.snd.fst + (suma[0][ind]-suma[0][aux.fst]) , aux.snd.snd + (suma[1][ind]-suma[1][aux.fst]) ));	
		}
		else{
			m.insert(make_pair(x,make_pair(ind,make_pair((op == 'R'? ind : 0),(op == 'R'? 0 : ind)))));
			suma[(op == 'R')][ind]++;
			suma[0][ind+1] = suma[0][ind];
			suma[1][ind+1] = suma[1][ind];
			ind++;
		}
	}
}








