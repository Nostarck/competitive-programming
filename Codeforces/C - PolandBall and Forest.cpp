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
vector<vector<int>> grafo;
vector<int> visitados;

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	grafo = vector<vector<int>>(n+10);
	visitados = vector<int>(n+10);
	int x;
	foru(i,0,n){
	    cin >> x;
	    grafo[x].pb(i+1);
	    grafo[i+1].pb(x);
	}
	
	int r = 0;
	foru(i,0,n){
	    if(!visitados[i+1]){
	        visitados[i+1] = 1;
	        r++;
	        queue<int> q;
	        q.push(i+1);
	        //cout << "oh yeah vamos a ver el vertice " << i+1 << endl;
	        while(!q.empty()){
	            int top = q.front();
	            q.pop();
	            //cout << "top " << top << endl;
	            int s = grafo[top].size();
	            //cout << "tama " << s << endl;
	            foru(j,0,s){
	                if(!visitados[grafo[top][j]]){
	                    //cout << "visitando el vertice  " << grafo[top][j] << endl; 
	                    q.push(grafo[top][j]);
	                    visitados[grafo[top][j]] = 1;
	                }
	            }
	        }
	    }
	}
	
	pt(r);
  	
  	
}







