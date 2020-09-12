
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
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	string s; cin >> s;
	string bear = "bear";
	int ub = -1;
	ll r = 0;
	int n = s.size();
	
	for(int i = 0; i < n-3; i++){
		string aux; aux+=s[i];
		aux += s[i+1];
		aux += s[i+2];
		aux += s[i+3];
		if(!(aux.compare(bear))){
			ll izquierda = (i-(ub+1));
			ll derecha   = n-4-i;
			r += izquierda + derecha + (izquierda*derecha) + 1;
			ub = i;
		}
	}
	
	
	pt(r);
	
}
