
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

ll ac[3][100010];

int main(){

	ll n; cin >> n; 
	foru(i,0,n){
		cin >> ac[0][i];
	}


	ac[1][0] = ac[0][0];
	foru(i,1,n){
		ac[1][i] = ac[0][i] + ac[1][i-1];	
	}

	sort(ac[0],ac[0]+n);

	ac[2][0] = ac[0][0];
	foru(i,1,n){
		ac[2][i] = ac[0][i] + ac[2][i-1];	
	}	
	ll c,x,y;
    ll q; cin >> q;
    while(q--){
    	cin >> c >> x >> y;
    	x--; y--;
    	if(!x) pt(ac[c][y]);
    	else pt(ac[c][y] - ac[c][x-1]);
    }


}
