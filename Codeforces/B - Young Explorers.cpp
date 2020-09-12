

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
		int n; cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		
		int tam = 1;
		int r = 0;
		for(int i = 0; i < n; i++){
			if(v[i] <= tam){
				r++;
				tam=1;
			}
			else{
				tam++;
			}
		}
		pt(r);
	}
	
}






