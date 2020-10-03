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
	
	int t; 
	cin >> t;
	while(t--){
		bool matrix[65][65];
		int n; 
		cin >> n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				int num;
				cin >> num;
				matrix[i][j] = (num == i*n+j+1);
			}
		}
		int r = 0;
		for(int d = n-1; d > 0; d--){
			
			if(!matrix[d-1][d]){
				
				for(int i = 0; i <= d; i++){
					for(int j = 0; j <= d; j++){
						if(i!=j){
							matrix[i][j] ^= 1; 
						}
					}
				}
				r++;
			}
		}
		
		pt(r);
		
		
		
		
		
	}
	
	
}



