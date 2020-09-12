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

int arr[110];


int main(){
	
	
	int n,q;
	cin >> n >> q;
	while(q--){
		int a,b,c;
		cin >> a >> b >> c;
		arr[a-1] -= c;
		arr[b-1] += c;
	}
	ll r = 0;
	foru(i,0,n){
		if(arr[i] < 0) r-=arr[i];
	}
	pt(r);

}
