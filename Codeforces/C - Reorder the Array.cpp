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



int n;
map<ll,ll> m;

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	cin >> n;
	vector<int> a(n);
	foru(i,0,n){
		cin >> a[i];
		m[a[i]]++;
	}
	int r = 0;
	map<ll,ll>::iterator aux = m.begin();
	for(map<ll,ll>::iterator it = m.begin(); it != m.end(); ){
		
		int x1 = it->snd;
		//cout << it->fst << " " << it->snd << " con ";
		it++;
		if(it==m.end()) break;
		//cout << it->fst << " " << it->snd << "\n";
		int x2 = it->snd;
		r += min(x1,x2);
		it->snd = max(x1,x2);
		
	}
	pt(r);
	
	
	
  	
  	
  	
}
