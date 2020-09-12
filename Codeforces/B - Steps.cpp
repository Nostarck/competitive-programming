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


ll calcularPasos(int x, int y,int inix, int iniy,int n, int m){
	ll pasosx,pasosy,pasosvalidos;
	if(x < 0) pasosx = inix-1;
	else pasosx = n-inix;

	if(y<0) pasosy = iniy-1;
	else pasosy = m-iniy;

	if(!x && y){
		pasosvalidos = pasosy/abs(y);
	}
	else if(!y && x){
		pasosvalidos = pasosx/abs(x);
	}
	else if(x && y){
		pasosvalidos = min(pasosx/abs(x),pasosy/abs(y));
	}
	else{
		pasosvalidos = 0;
	}
	

	return pasosvalidos;

}


int main(){

    int n,m;
    cin >> n >> m;

    int inix,iniy;
    cin >> inix >> iniy;

    int k; 
    cin >> k;

    int x,y;
    ll steps = 0;
    foru(i,0,k){
    	cin >> x >> y;
    	ll pasosx,pasosy,pasosvalidos;
    	

    	pasosvalidos = calcularPasos(x,y,inix,iniy,n,m);
    		


    	steps += pasosvalidos;
    	inix += (x*pasosvalidos);
    	iniy += (y*pasosvalidos);
    	
    }

    pt(steps);
    
    


}
