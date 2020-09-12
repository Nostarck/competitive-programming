#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>



int a[20];
int dp[2800][20];
int n;

int solve(int v, int i){
	if(dp[v][i] != -1) return dp[v][i];
	if(i == n && !v) return 1;
	if(i == n) return 0;
	else{
		return dp[v][i] = ( ( solve(abs(v+a[i])%360,i+1) ) + ( solve(abs(v-a[i])%360, i+1) ));
	}
}


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];	
	}
	for(int i = 0; i < 2800; i++){
		for(int j = 0; j < 20; j++){
			dp[i][j] = -1;
		}
	}
	
	cout << ((solve(0,0))?"YES":"NO") << endl;
	
	
	
	
	
	
}
 
