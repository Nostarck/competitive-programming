#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int t; cin >> t;
	int n,k;
	while(t--){
		
		cin >> n >> k;
		int p;
		int r,minv;
		minv = INF;
		r = -1;
		for(int i = 0; i < n; i++){
			cin >> p;
			if(p<k && !(k%p)){
				if(k/p < minv){
					minv = k/p;
					r = p;
				}
			}
		}
		
		pt(r);
		
		
		
	}
	
	
	
	
}



