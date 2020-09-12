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

int f[100];
int p[100];
int r[100];

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        forue(i,0,m) r[i] = -1;
        foru(i,0,n) cin >> f[i];
        foru(i,0,n) cin >> p[i];
        
        foru(i,0,n){
            if(r[f[i]] == -1) r[f[i]] = p[i];
            else r[f[i]] += p[i];
        }
        
        int menor = INF;
        forue(i,0,m){
            if(r[i] != -1) menor = min(menor,r[i]);
        }
        pt(menor);
    }
	
	

}
