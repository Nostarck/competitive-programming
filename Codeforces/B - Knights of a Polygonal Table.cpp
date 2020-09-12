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
ll poder[100100];
ll arr[100100];
ll dp[100100][15];
ll solve(ll i, ll k){
	if(i < 0 || !k) return 0;
	if(dp[i][k]) return dp[i][k];
	ll r = max(solve(i-1,k), (arr[i] + solve(i-1,k-1)));
	return dp[i][k] = r;
			
}

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	ll n,k; cin >> n >> k;
	foru(i,0,n) cin >> poder[i];
	ll coins;
	foru(i,0,n){
		cin >> coins;
		m.insert(make_pair(poder[i],coins));
	}
	ll ind = 0;
	forall(it,m){
		arr[ind] = it->snd;
		m[it->fst] = arr[ind] + solve(ind-1,k);
		ind++;
	}
	
	foru(i,0,n)	cout << m[poder[i]] << " ";
}
