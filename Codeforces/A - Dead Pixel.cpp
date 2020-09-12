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



int main(){

    
    ll a,b,x,y;
    ll a1,b1,x1,y1;
    ll t; cin >> t;
    while(t--){
        cin >> a >> b >> x >> y;
        ll r1,r2;
        ll num = max(a-1-x,x);
        r1 = (num*b);
        num = max(b-1-y,y);
        r2 = (num*a);
        pt(max(r1,r2));
    }
    


}
