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


vector<vector<int>> g;
vector<int> distancias;


int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	
  	int x,n; cin >> n;
  	g = vector<vector<int>>(n+15);
  	distancias = vector<int>(n+15);
  	foru(i,0,n){
  	    //cout << "p" << endl;
  	    cin >> x;
      	   if(x != -1){
      	    g[x].pb(i+1);
  	    }
  	}
  	
  	forue(i,1,n) distancias[i] = -1;
  	
  	
  	queue<int> q;
  	int r = 1;
  	forue(nodo,1,n){
  	    if(distancias[nodo] == -1){
  	        distancias[nodo] = 1;
  	        q.push(nodo);
  	        while(!q.empty()){
  	            
  	            int top = q.front();
  	            
  	            q.pop();
  	            
  	            //cout << "entrando al nodo " << top << endl;
  	            int s = g[top].size();
  	           //cout << "con un largo de " << s << endl;
  	            int distanciaActual = distancias[top];
  	            r = max(r,distanciaActual);
  	            foru(i,0,s){
  	                if(distancias[g[top][i]] == -1 || distancias[g[top][i]] < distanciaActual+1){
  	                    
  	                    distancias[g[top][i]] = distanciaActual+1;
  	                    q.push(g[top][i]);
  	                }
  	            }
  	        }
  	    }
  	}
  	
  	pt(r);
}






