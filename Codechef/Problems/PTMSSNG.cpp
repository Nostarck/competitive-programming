#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

map<int,int> xs;
map<int,int> ys;


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--){
		xs.clear();
		ys.clear();
		int n; cin >> n;
		n = n*4 - 1;
		int x,y;
		while(n--){
			cin >> x >> y;
			xs[x]++; 
			ys[y]++;
		}
		int rx,ry;
		for(map<int,int>::iterator it = xs.begin(); it!=xs.end(); it++){
			if(it->second%2){
				rx = it->first;
				break;
			}
		}
		for(map<int,int>::iterator it = ys.begin(); it!=ys.end(); it++){
			if(it->second%2){
				ry = it->first;
				break;
			}
		}
		cout << rx << " " << ry << "\n";
	}
}





