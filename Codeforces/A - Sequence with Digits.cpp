
#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>


int *minimaxi(ll n){
	static int arr[2];
	arr[0] = 10;
	arr[1] = 0;
	ll mod = 10;
	while(n){
		arr[0] = n%mod < arr[0]? n%mod: arr[0];
		arr[1] = n%mod > arr[1]? n%mod: arr[1];
		n/=10;
	}
	return arr;
}


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		ll a,k;
		cin >> a >> k;
		int *arr = minimaxi(0);
		
		for(int i = 1; i < k && arr[0]; i++){
			arr = minimaxi(a);
			a = a + arr[0] * arr[1];
		} 
		
		cout << a << "\n";
		
		
	}
	
	
}






