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

set<int> se;
int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    string s = "";
	    if(n%2){
	        s+='7';
	        int l = (n-3)/2;
	        while(l--) s+='1';
	    }
	    else{
	        int l = n/2;
	        while(l--) s+='1';
	    }
	    cout << s << endl;
	}
}
