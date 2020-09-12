

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
//static_cast<double>


map<int,int> fact1;
map<int,int> fact2;


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int a,b;
	cin >> a >> b;
	bool f1,f2;
	f1 = f2 = true;
	fact1.insert(make_pair(2,0));
	fact1.insert(make_pair(3,0));
	fact1.insert(make_pair(5,0));
	
	fact2.insert(make_pair(2,0));
	fact2.insert(make_pair(3,0));
	fact2.insert(make_pair(5,0));
	
	while(f1 || f2){
		if(f1){
			if(!(a%2)){
				fact1[2]++;
				a/=2;
			}
			else if(!(a%3)){
				fact1[3]++;
				a/=3;
			}
			else if(!(a%5)){
				fact1[5]++;
				a/=5;
			}
			else f1=false;
		}
		if(f2){
			if(!(b%2)){
				fact2[2]++;
				b/=2;
			}
			else if(!(b%3)){
				fact2[3]++;
				b/=3;
			}
			else if(!(b%5)){
				fact2[5]++;
				b/=5;
			}
			else f2=false;
		}
	}
	int r = 0;
	if(a==b){
		r += abs(fact1[2]-fact2[2]);
		r += abs(fact1[3]-fact2[3]);
		r += abs(fact1[5]-fact2[5]);
	}
	else{
		r = -1;
	}
	cout << r << endl;
}

