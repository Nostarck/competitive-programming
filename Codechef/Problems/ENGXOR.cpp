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

int r[2];

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
    int t; cin >> t;
    int n,q;
    
    while(t--){
        cin >> n >> q;
        foru(i,0,n){
            int x; cin >> x;
            
            int aux = 0;
            foru(bit,0,30) aux += ((x&(1<<bit))?1:0);
            r[aux%2]++;
        
            
        }
        foru(i,0,q){
            int p; cin >> p;
            
            int cambios = 0;
            foru(bit,0,30) cambios += ((p&(1<<bit))?1:0);
            printf("%i %i\n",r[(cambios%2)],r[!(cambios%2)]);
        }
        r[0] = r[1] = 0;
        
    }
     

}