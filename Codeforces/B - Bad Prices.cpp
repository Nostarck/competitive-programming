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

int arr[200000];

int main(){

	int q;
	scanf("%i",&q);
	while(q--){
		int n; scanf("%i",&n);
		int r = 0;
		
		foru(i,0,n) scanf("%i",&arr[i]);
		int minimo = arr[n-1];
		forb(i,n-1){
			if(arr[i] > minimo) r++;
			else minimo = arr[i];
		}
		printf("%i\n",r);
	}

    
    


}
