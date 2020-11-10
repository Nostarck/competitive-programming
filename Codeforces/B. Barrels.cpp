#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
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
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int t; cin >> t;
	
	while(t--){
		
		int n,k;
		cin >> n >> k;
		
		vector<ll> v;
		ll minimum,maximum;
		minimum = INF;
		maximum = -INF;
		foru(i,0,n){
			ll x;
			cin >> x;
			minimum = min(minimum,x);
			maximum = max(maximum,x);
			if(x) v.pb(x);
		}
		sort(v.begin(),v.end());
		int l = v.size();
		
		if(l>1){
			int index = l-2;
			foru(i,0,k){
				if(index<0) break;
				maximum+=v[index];
				minimum = 0;
				index--;
			
			}
		}
		pt(maximum-minimum);
	}
	
}



