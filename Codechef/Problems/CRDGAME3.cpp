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

	int t; cin >>t;
	
	while(t--){
		
		double c,r;
		cin >> c >> r;
		
		int digitsc = ceil(c/9);
		int digitsr = ceil(r/9);
		if(digitsc < digitsr){
			cout << 0 << " " << digitsc << endl;
		}
		else{
			cout << 1 << " " << digitsr << endl;
		}
	}

}



