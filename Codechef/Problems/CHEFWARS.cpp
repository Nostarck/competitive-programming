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
	
	while(t--){
		
		int h,p;
		cin >> h >> p;
		
		while(true){
			h-=p;
			if(h <= 0){
				pt(1);
				break;
			}
			p/=2;
			if(!p){
				pt(0);
				break;
			}
		}
		
		
	}
	
}



