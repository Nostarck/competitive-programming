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

ll arr[400000];
ll inicial[400000];
int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	ll n,k; cin >> n >> k;
  	foru(i,0,n){
		cin >> arr[i]; inicial[i] = arr[i];  
	}
	ll r = 0;
	foru(i,0,n-1){
		
		while(true){
			
			if(arr[i] <= k && arr[i] <= inicial[i]){
				arr[i+1] += arr[i];	break;
			}
			if(arr[i] <= k && arr[i] >= inicial[i]){
				r++; break;	
			}
			r += arr[i]/k;
			arr[i]%=k;
		}
	}
  	
  	r += (arr[n-1]%k? (arr[n-1]/k) + 1 : (arr[n-1]/k)); 
  	pt(r);
}
