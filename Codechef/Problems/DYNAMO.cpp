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

ll p0w(ll a, ll b){
    
    ll r = 1;
    foru(i,0,b){
        r *= a;
    }
    return r;
    
}

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	
  	ll t; cin >> t;
  	while(t--){
  	    
  	    ll n; cin >> n;
  	    ll a,b,c,d,e;
  	    ll guess;
  	    cin >> a;
  	    guess = a + ((p0w(10,n) - 1)*2) + 2;
  	    cout << guess << endl;
  	    cin >> b;
  	    c = p0w(10,n) - b;
  	    cout << c << endl;
  	    cin >> d;
  	    e = p0w(10,n) - d;
  	    cout << e << endl;
  	    ll r = 1;
  	    cin >> r;
  	    if(r == -1) break;
  	    
  	}
  	
  	
  	
  	
}
