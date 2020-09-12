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


vector<vector<int>> arbol;


int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	int n; cin >> n;
	arbol = vector<vector<int>>(n+10);
	int x;
	foru(i,0,n-1){
	    cin >> x;
	    arbol[x].pb(i+2);
	}
	int r = 0;
	foru(i,0,n){
	    int largo = arbol[i].size();
	    if(largo){
	        int cuenta = 0;
	        foru(j,0,largo){
	            if(!arbol[arbol[i][j]].size()) cuenta++;
	        }
	        if(cuenta < 3){
	            cout << "no\n";
	            return 0;
	        }
	    }
	}
  	cout << "yes" << endl;
  	
}
