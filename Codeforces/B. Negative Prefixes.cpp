#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
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


int a[110];
int state[110];

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		foru(i,0,n){
			cin >> a[i];
		}
		vector<int> v;
		foru(i,0,n){
			cin >> state[i];
			if(!state[i]){
				v.pb(a[i]);
			}
		}
		sort(v.begin(),v.end(),greater<int>());
		int index = 0;
		foru(i,0,n){
			if(!state[i]){
				a[i] = v[index++]; 
			}
			cout << a[i] << " ";
		}
		cout << "\n"; 
	}
	
}



