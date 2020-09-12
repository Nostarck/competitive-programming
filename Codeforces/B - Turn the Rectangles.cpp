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
int pares[100010][2];

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	foru(i,0,n) cin >> pares[i][0] >> pares[i][1];
  	int r = min(pares[n-1][0],pares[n-1][1]);
  	int aux;
  	
  	forb(i,n-1){
  		
  		if(min(pares[i][0],pares[i][1]) >= r) r = min(pares[i][0],pares[i][1]);
  		else if(max(pares[i][0],pares[i][1]) >= r) r = max(pares[i][0],pares[i][1]);
  		else{
  			r = -1;
			break;	
  		}
  	}
  	
  	cout << (r != -1? "YES":"NO") << endl;
  	
  	
  	
}
