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
map<ll,ll> m;
ll a[4*100100];

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	int n; cin >> n;
	ll suma = 0;
	foru(i,0,n){
		cin >> a[i];
		suma += a[i];
		m[a[i]]++;
	}
	
	ll mayor1,mayor2;
	map<ll,ll>::iterator it;
	it = m.end(); it--;
	if(it->snd > 1){
		mayor1 = mayor2 = it->fst;
	}
	else{
		mayor1 = it->fst;
		it--;
		mayor2 = it->fst;	
	}
	ll cant = 0;
	vector<ll> r;
	
	foru(i,0,n){
		if(a[i] != mayor1){
			ll op = suma-a[i]-mayor1;
			if(op == mayor1){
				cant++; r.push_back(i+1);
			}
		}
		else{
			ll op = suma-a[i]-mayor2;
			if(op == mayor2){
				cant++; r.push_back(i+1);
			}	
		}
	}
	
	cout << cant << "\n";
	foru(i,0,cant) cout << r[i] << " ";
	
	
	
	
	
	
	
	
	
}
