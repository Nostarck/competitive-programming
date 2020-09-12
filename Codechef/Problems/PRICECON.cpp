


#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>
// siempre que el precio de un producto se pase de K, ese producto
// debe bajar el precio a K, entonces chef pierde precio_del_producto - K por cada precio que sobrepase K
// nada mas se debe iterar sobre los productos y hacer la resta cuando sea necesario e ir sumando lo que el chef pierde
// O(n)
int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int x;
		int r = 0;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x>k) r += x-k;
		}
		pt(r);
	}
	
}









