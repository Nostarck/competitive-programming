
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
//static_cast<double>

int counts[5010];
int dp[5010][5010];
vector<ii> p;

int solve(int left,int right){
	if(left>right) return 0;
	if(dp[left][right]) return dp[left][right];
	
	
	if(p[left].first*2 >= p[right].first){
		return 0;
	}
	
	int op1 = p[left].second + solve(left+1,right);
	int op2 = p[right].second + solve(left,right-1);
	return dp[left][right] = min(op1,op2);
}


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		counts[x]++;
	}
	
	for(int i = 0; i < 5001; i++){
		if(counts[i]){
			p.push_back(make_pair(i,counts[i]));
		}
	}
	int l = p.size();
	cout << solve(0,l-1) << endl;
	

}







