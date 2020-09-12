#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define epsilon 1e-10
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

map<ii,int> radiator;

double distanciaEuclidiana(int x1,int y1,int x2,int y2){
	int a = x1-x2;
	int b = y1-y2;
	return (sqrt(static_cast<double>(a*a+b*b)));
}

 
bool comp_d(double a, double b) { return a<=b; }

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	int a1,a2,b1,b2;
	cin >> a1 >> b1 >> a2 >> b2;
	int n; cin >> n;
	int x,y,r;
	foru(i,0,n){
		cin >> x >> y >> r;
		radiator.insert(make_pair(make_pair(x,y),r));
	}	
	
	
	r = 0;
	int start,end;
	start = min(a1,a2); end = max(a1,a2);
	for(int i = start+1; i < end; i++){
		
		bool arriba,abajo;
		arriba = abajo = true;
		for(map<ii,int>::iterator it=radiator.begin(); it != radiator.end() && (arriba||abajo); it++){
			
			if(comp_d(distanciaEuclidiana(i,b1,it->first.first,it->first.second),static_cast<double>(it->second))){
				arriba = false;
			}
			if(comp_d(distanciaEuclidiana(i,b2,it->first.first,it->first.second),static_cast<double>(it->second))){
				abajo = false;
			}
		}
		
		if(arriba) r++;
		if(abajo)  r++;
	} 
	
	start = min(b1,b2); end = max(b1,b2);
	for(int i = start; i <= end; i++){
		bool f1,f2; f1 = f2 = true;
		for(map<ii,int>::iterator it=radiator.begin(); it != radiator.end() && (f1||f2); it++){
			if(comp_d(distanciaEuclidiana(a1,i,it->first.first,it->first.second),static_cast<double>(it->second))){
				f1=false;
			}
			if(comp_d(distanciaEuclidiana(a2,i,it->first.first,it->first.second),static_cast<double>(it->second))){
				f2=false;
			}
		}
		if(f1)r++;
		if(f2) r++;
	}
	
	pt(r);
	
}

