#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define foru(i,a,b) for(int i=(a); i<(b); i++)
#define forue(i,a,b) for(int i=(a); i<=(b); i++)
#define forb(i,n) for(int i=(n-1); i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define pt(x) cout << x << "\n"
#define sz(c) ((int)c.size())
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;

int dp[10][10];
char s[10];
int c[10];

int solve(int i, int subconj){
	if(dp[i][subconj]) return dp[i][subconj];
	if(subconj == 7) return 0;
	if(i == 8) return INF;
	
	int r;
	if( !(c[i] ) || (subconj | i) == subconj) r = solve(i+1,subconj);
	else{
		int x1,x2;
		x1 = solve(i+1,subconj);
		x2 = c[i] + solve(i+1,(subconj | i));	
		r = min(x1,x2);
	}
	return dp[i][subconj] = r;
}


int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	int n,precio,conjunto,istring; cin >> n;

  	foru(i,0,n){
  		
  		cin >> precio >> s;
		istring = 0; conjunto = 0;
		while(s[istring]){
			conjunto = (conjunto | (1<<(s[istring]-'A')));
			s[istring++] = 0; 	
		}
		c[conjunto] = !c[conjunto]? precio : min(precio,c[conjunto]);
  	}
  	
  	cout << (solve(0,0) == INF ? -1 : solve(0,0)) << endl;
  	
}
