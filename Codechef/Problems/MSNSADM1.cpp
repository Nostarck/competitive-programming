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

int a[200];
int b[200];

int main(){

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		foru(i,0,n) cin >> a[i];
		foru(i,0,n) cin >> b[i];

		ll r = 0;

		foru(i,0,n){
			ll cero = 0;
			ll pts = a[i]*20 - b[i]*10;
			r = max(r,max(cero,pts));
		}

		pt(r);
	}

}
