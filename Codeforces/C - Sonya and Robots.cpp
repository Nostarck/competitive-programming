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
int main(){ 
	ios::sync_with_stdio(0);
  	
  	int n; cin >> n;
  	int x; cin >> x;  	
  	int difs = 1;
  	m.insert(make_pair(x,0));
  	ll r = 0;
	foru(i,1,n){
		cin >> x;
  		if(m.count(x)){
  			r -= m[x]; m.erase(x);
  			m.insert(make_pair(x,difs));
  			r += m[x];
  		}
  		else{
  			m.insert(make_pair(x,difs));
  			r += m[x];
  			difs++;
		}
  	}
  	pt(r);
}










