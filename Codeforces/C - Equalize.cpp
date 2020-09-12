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

char s1[1000010];
char s2[1000010];
int n;
int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	scanf("%i",&n);
	scanf("%s",s1); scanf("%s",s2);
	int r = 0;
	foru(i,0,n) if(s1[i] != s2[i]) s1[i] = s2[i] == '1'? 'x' : 'y';	
  	
  	foru(i,0,n){
  		if(i+1 < n){
  			if((s1[i] == 'x' || s1[i] == 'y') && (s1[i+1] == 'x' || s1[i+1] == 'y')){
	  			if(s1[i] != s1[i+1]){
					r++;
					s1[i+1] = ' ';
				}
				else r++;
			}
			else if(s1[i] == 'x' || s1[i] == 'y') r++;
  		}
  		else if(s1[i] == 'x' || s1[i] == 'y') r++; 
  	}
  	pt(r);
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
}
