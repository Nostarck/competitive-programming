#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

comp_d(double a, double b){
if(fabs(a-b) <= 1e-10) return 0;
return a>b? 1 : -1;
}



int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int t; cin >> t;
	while(t--){
		
		ll l,r;
		cin >> l >> r;
		double a = r+1;
		if(!comp_d((double)l,a/2) || comp_d((double)l,a/2) == 1){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}



