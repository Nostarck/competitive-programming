#include<bits/stdc++.h>
using namespace std;
#define foru(i,a,b) for(int i=(a); i<(b); i++)
#define forb(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define pt(x) cout << x << "\n"
typedef long long int ll;


int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
 	int n,x,s,a,b,t;
	cin >> t;
	while(t--){
		cin >> n >> x >> s;
		while(s--){
			cin >> a >> b;
			if(x == a || x == b) x = x==a? b : a;	
		}
		pt(x);
	}
  	
}