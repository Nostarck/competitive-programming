
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
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	
	int t; cin >> t;
	int n; 
	while(t--){
		cin >> n;
		int aux = n/2;
		ll a = pow(2,n--);
		ll b = 0;
		
		for(int i = 0; i < aux; i++) b += pow(2,n--);
		while(n) a+=pow(2,n--);
		cout << abs(a-b) << endl;
	}
	
}
