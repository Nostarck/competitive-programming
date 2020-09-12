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
    
    
    int tot,k;
    cin >> tot >> k;
    int x; 
    vector<int> n,p;
    foru(i,0,tot){
        cin >> x;
        if(x<0) n.pb(abs(x));
        else p.pb(x);
    }
    
    sort(n.begin(),n.end());
    int puntero = n.size() - 1;
    while(k>0 && puntero > -1){
        p.pb(n[puntero--]);
        k--;
    }
    
    sort(p.begin(),p.end());
    int ind = 0;
    ll suma = 0;
    if((k%2)){
        ind = 1;
        suma -= p[0];
    }
    
    for(;ind < p.size();){
        suma += p[ind++];
    }
    for(;puntero >= 0;){
        suma -= n[puntero--];
    }
    
    pt(suma);
    


}
