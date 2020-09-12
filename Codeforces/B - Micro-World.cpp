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
map<ll,ll> m;
int n,k;

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	cin >> n >> k;
  	int x;
	foru(i,0,n){
  		cin >> x;
  		m[x]++;
  	}
  	
  	map<ll,ll>::iterator it = m.begin();
  	map<ll,ll>::iterator itmayor = m.begin();
  	itmayor++;
  	ll r = 0;
  	for(;itmayor != m.end(); it++,itmayor++){
  		if(itmayor->fst - it->fst <= k) r += it->snd;
  	}
  	pt(n-r);
  	
}
