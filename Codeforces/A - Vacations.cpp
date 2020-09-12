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

int dp[110][5][5];
int a[110];
int n;

int solve(int i, int actual, int pasado){
	int suma;
	if(dp[i][actual][pasado] != -1) return dp[i][actual][pasado];
	if(actual == pasado || actual == 2){
		suma = 1;
		actual = 2;
	}else suma = 0;

	if(i == n) return suma;

	if(a[i] == 0) return dp[i][actual][pasado] = suma + solve(i+1,2,actual);
	if(a[i] == 1) return dp[i][actual][pasado] = suma + solve(i+1,1,actual);
	if(a[i] == 2) return dp[i][actual][pasado] = suma + solve(i+1,0,actual);
	else{
		return dp[i][actual][pasado] = min(suma+solve(i+1,1,actual),suma+solve(i+1,0,actual));

	}
}

int main(){
	cin >> n;
    foru(i,0,n) cin >> a[i];
    foru(i,0,110) foru(j,0,5) foru(k,0,5) dp[i][j][k] = -1;
    pt(solve(0,3,2));


}
