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

int arr[100010];

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	
	int t; cin >> t;
	
	while(t--){
		int n; cin >> n; 
		foru(i,0,n) cin >> arr[i];
		sort(arr,arr+n,greater<int>());
		ll r = 0;
		foru(i,0,n){
			r += ((arr[i]-i) < 0? 0:(arr[i]-i));
			arr[i] = 0;
		}
		
		pt((r%1000000007));
	
	
	}
	
}
