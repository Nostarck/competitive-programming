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

ll acq[100100];
ll acp[100100];


 
 
int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
	    
	    int n,k; cin >> n >> k;
	    forue(i,1,n){
	        int x; cin >> x;
	        acq[i] = (x%k)+acq[i-1];
	        acp[i] = k-(x%k) + acp[i-1];
	        //cout << acq[i] << " " << acp[i] << endl;
	    }
	    
	    ll r = INF; 
	    forue(i,1,n){
	        if(acq[i]-(acp[n]-acp[i]) >= 0){
	            r = min(r,acq[i]-(acp[n]-acp[i]));
	        }
	    }
	    pt(r);
	    
	}
  	
}
