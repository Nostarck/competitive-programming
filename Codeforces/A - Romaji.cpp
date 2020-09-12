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

char s[110];

int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
  	cin >> s;
  	int largo = 0; int l = 0; bool r = true;
  	while(s[largo++]);
  	largo--;
  	//cout << endl;
  	if(largo == 1 && s[0] != 'a' && s[0] != 'e' && s[0] != 'i'  && s[0] != 'o'  && s[0] != 'u'  && s[0] != 'n') r = false;
  	else{
		  foru(l,0,largo){
	 		//cout << s[l] << endl;
			if(s[l] != 'a' && s[l] != 'e' && s[l] != 'i'  && s[l] != 'o'  && s[l] != 'u'  && s[l] != 'n'){
				if(s[l+1] != 'a' && s[l+1] != 'e' && s[l+1] != 'i'  && s[l+1] != 'o'  && s[l+1] != 'u'){
					r = false; break;	
				}
			}
	  	}
  	}
 	
 	cout << (r? "YES" : "NO") << endl;
}
