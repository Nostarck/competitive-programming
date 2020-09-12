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

vector<int> v;
comp_d(double a, double b){
	if(fabs(a-b) <= 1e-10) return 0;
	return a>b? 1 : -1;
}

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,l;
	cin >> n >> l;
	int x;
	foru(i,0,n){cin >> x; v.pb(x);}
	sort(v.begin(),v.end());
	double r = v[0]-0;
	foru(i,1,n){
		double aux = (v[i]-v[i-1])/2.0;
		if(aux>r) r = aux;
	}
	double aux = l-v[n-1];
	if(aux>r) r = aux;
	cout << fixed << setprecision(9) << r << endl;
	
	
	
	
}
