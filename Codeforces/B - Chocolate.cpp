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
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	
	ll r = 0;
	int espacios = 0;
	
	
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x){
			if(!r){r = 1; espacios = 1;}
			else{
				r*=espacios;
				espacios=1;
			}
		}
		else{
			espacios++;
		}
	}
	
	cout << r << endl;
	
	
}

