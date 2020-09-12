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

map<ii,int> plants;

int check(int x,int y){
    ii par = make_pair(x, y);
    if(plants.count(par)) return 0;
    return 1;
}


int main(){
    int t; scanf("%i",&t);
    while(t--){
        int n,m,ps;
        scanf("%i %i %i",&n,&m,&ps);
        int x,y;
        foru(i,0,ps){
            scanf("%i %i",&x,&y);
            plants[make_pair(x,y)]++;
        }
        //solucion;
        ll tot = 0;
        forall(i,plants){
            tot += check(i->fst.fst-1,i->fst.snd);
            tot += check(i->fst.fst+1,i->fst.snd);
            tot += check(i->fst.fst,i->fst.snd-1);
            tot += check(i->fst.fst,i->fst.snd+1);
        }
        pt(tot);
        plants.clear();
    }
}