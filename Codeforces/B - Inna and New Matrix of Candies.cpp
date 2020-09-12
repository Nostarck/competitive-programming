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

set<int> conjunto;

int main(){

    int n,m;
    cin >> n >> m;
    string s;
    ll r = 0;
    bool flag = false;
    foru(k,0,n){
        cin >> s;
        
        foru(i,0,m){
        
            if(s[i] == 'G'){
                
                ll contador = 0;
                foru(j,i+1,m){
                    contador++;
                    if(s[j] == 'S') break;
                }
                conjunto.insert(contador);
                break;
            }
            else if(s[i] == 'S'){
                pt(-1);
                return 0;
            }
        }
    }
    pt(conjunto.size());
    
    
    


}
