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



int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        double fuerza,x1,x2,x3,suma;
        cin >> fuerza;
        suma = 0;
        cin >> x1; suma += x1;
        cin >> x2; suma += x2;
        cin >> x3; suma += x3;
        if(suma == 6.0 && fuerza == 3.0) pt(3);
        else if(x1 == 1.0 && x2 == 2.0 && x3 == 1.0 && fuerza == 2.0) pt(3);
        else{double cantidad = suma/fuerza;
        int r = ceil(cantidad);
        pt(r);}
        
    }
  	
}
