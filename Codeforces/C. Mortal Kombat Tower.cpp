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


int a[200010];
int dp[200010];
int n;

int solve(int i){
	if(dp[i] != -1)
		return dp[i];
	if(i >= n)
		return 0;
	if(i == n-1)
		return a[i];
	
	int sol1 = a[i] + a[i+1] + solve(i+3);
	int sol2 = a[i] + a[i+1] + solve(i+4);
	int sol3 = a[i] + solve(i+2);
	int sol4 = a[i] + solve(i+3);
 	return dp[i] = min(min(min(sol1,sol2),sol3),sol4);
}

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		foru(i,0,n){
			cin >> a[i];
			dp[i] = -1;
		}
		pt(solve(0));
		foru(i,0,n){
			a[i] = 0;
			dp[i] = -1;
		}
	}
}



