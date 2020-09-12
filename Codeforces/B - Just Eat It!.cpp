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



int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	ll t; cin >> t;
  	while(t--){
  	    ll n;
  	    ll totalSum = 0;
  	    ll auxSum = 0;
  	    ll maxSum = 0;
  	    
  	    ll auxSum2 = 0;
  	    ll maxSum2 = 0;
  	    
  	    
  	    ll x;
  	    cin >> n;
  	    ll primero,segundo;
  	    foru(i,0,n){
  	        cin >> x;
  	        totalSum += x;
  	        if(!i) maxSum = x;
  	        if(i == 1) maxSum2 = x;
  	        
  	        if(i < n-1){
      	        auxSum += x;
      	        maxSum = max(maxSum,auxSum);
      	        if(auxSum < 0){
      	            auxSum = 0;
      	        }
  	        }
  	        if(i > 0){
  	            auxSum2 += x;
      	        maxSum2 = max(maxSum2,auxSum2);
      	        if(auxSum2 < 0){
      	            auxSum2 = 0;
      	        }
  	        }
  	    }
  	   
  	    ll maxKadane = max(maxSum,maxSum2);
  	    //cout << totalSum << " " << maxKadane << endl;
  	    if(totalSum > maxKadane) cout << "YES\n";
  	    else cout << "NO\n";
  	}
  	
}
