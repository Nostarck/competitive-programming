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

vector<vector<int>> g;
vector<int> precios;
vector<int> visitados;
vector<int> grupos;


int main(){
    
    int n,k;
    cin >> n >> k;
    g = vector<vector<int>>(n+15);
    precios = vector<int>(n+15);
    visitados = vector<int>(n+15);
    
    int a,b;
    foru(i,0,k){
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    
    foru(i,0,n) cin >> precios[i+1];
    int f = 0;
    foru(i,0,n){
        
        if(!visitados[i+1]){
            stack<int> st;
            st.push(i+1);
            visitados[i+1] = 1;
            
            int minimo = -1;
            while(!st.empty()){
                int nodo = st.top();
                st.pop();
                if(precios[nodo] >= 0){
                    if(minimo == -1) minimo = precios[nodo];
                    else minimo = min(minimo,precios[nodo]);
                }
                int l = g[nodo].size();
                foru(j,0,l){
                    int nodito = g[nodo][j];
                    if(!visitados[nodito]){
                        st.push(nodito);
                        visitados[nodito] = 1;
                    }
                }
            }
            if(minimo == -1) f=1;
            
            grupos.pb(minimo);
            
        }
    }
    int l = grupos.size();
    if(l==1) pt(0);
    else if(f) pt(-1);
    else{
        
            sort(grupos.begin(),grupos.end());
            int r = 0;
            foru(i,0,l) r+=grupos[i];
            r += grupos[0]*(l-2);
            pt(r);
        
    }
    
    
    
    
    
}




