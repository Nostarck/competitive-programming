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

map<ll,ll> m;

int main(){
    
    int n; cin >> n;
    int m1,m2; m1 = m2 = -1;
    foru(i,0,n){
        int x; cin >> x;
        if(x > m1){
            m2 = m1;
            m1 = x;
        }
    }
    pt((m2 == -1? 0 : m2));
}
