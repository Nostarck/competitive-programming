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

string s;



int main(){

	cin >> s;
	int r,l,abiertos;
	l = s.size();
	abiertos = r = 0;
	foru(i,0,l){
		if(s[i] == '(') abiertos++;
		else if(s[i] == ')' && abiertos){
			abiertos--;
			r++;
		}
	}  

	pt(r*2);
    
    


}
