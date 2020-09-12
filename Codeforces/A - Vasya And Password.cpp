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
  	int t; cin >> t;
  	int l,mask;
  	while(t--){
  		cin >> s;
  		l = 0; mask = 0;
  		while(s[l]){
  			
  			if(s[l] >= 'A' && s[l] <= 'Z') mask |= 1;	
			if(s[l] >= 'a' && s[l] <= 'z') mask |= 2;
			if(s[l] >= '0' && s[l] <= '9') mask |= 4;
			l++;	
  		}
  		
  		if(mask == 1){
  			s[0] = '1'; s[1] = 'a';
  		}
  		else if(mask == 2){
  			s[0] = '1'; s[1] = 'A';
  		}
  		else if(mask == 4){
  			s[0] = 'A'; s[1] = 'a';
  		}
  		else if(mask == 3){
  			if((s[0] >=  'A' && s[0] <= 'Z') && (s[1] >=  'A' && s[1] <= 'Z')){
  				s[0] = '1';	
  			}
  			else if((s[0] >=  'a' && s[0] <= 'z') && (s[1] >=  'a' && s[1] <= 'z')){
  				s[0] = '1';	
  			} 
  			else{
  				s[2] = '1';	
  			}
  		}
  		else if(mask == 5){
  			if((s[0] >=  'A' && s[0] <= 'Z') && (s[1] >=  'A' && s[1] <= 'Z')){
  				s[0] = 'a';	
  			}
  			else if((s[0] >=  '0' && s[0] <= '9') && (s[1] >=  '0' && s[1] <= '9')){
  				s[0] = 'a';	
  			}
  			else{
  				s[2] = 'a';	
  			}
  		}
  		else if(mask == 6){
  			if((s[0] >=  '0' && s[0] <= '9') && (s[1] >=  '0' && s[1] <= '9')){
  				s[0] = 'A';	
  			}
  			else if((s[0] >=  'a' && s[0] <= 'z') && (s[1] >=  'a' && s[1] <= 'z')){
  				s[0] = 'A';	
  			}
  			else{
  				s[2] = 'A';	
  			}
  		}
  		printf("%s\n",s);
  		foru(i,0,l){
  			s[i] = 0;	
  		}
  		l = 0;
  			
  	}
  	
  	
  	
}
