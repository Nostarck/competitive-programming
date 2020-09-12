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

string s;
char c;
int main(){
    
    int t; cin >> t;
    while(t--){
        int l; cin >> l;
        int ini = 0; int fin = l-1;
        cin >> s; cin >> c;
        ll tot = 0;
        foru(i,0,l){
            if(s[i] == c){
                tot += (fin-ini+1) + ((fin-i)*(i-ini));
                ini = i+1;
            }
        }
        pt(tot);
    }
}