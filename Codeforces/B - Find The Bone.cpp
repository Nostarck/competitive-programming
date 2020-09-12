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
#define add(a, b, w) g[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;

int huecos[1000010];

int main(){


	int n,m,k; scanf("%i %i %i",&n,&m,&k);
	int aux;
	foru(i,0,m){
		scanf("%i",&aux);
		huecos[aux] = 1;
	}
	int x,y;
	bool ya = huecos[1];
	int r = 1;
	while(k--){
		scanf("%i %i",&x,&y);
		
		if(!ya){
			if(x == r){
				r = y;
				ya = huecos[r];
			}
			else if(y == r){
				r = x;
				ya = huecos[r];
			}

		} 
	}
	printf("%i\n",r);
    
    
    


}
