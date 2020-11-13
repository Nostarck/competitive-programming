#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
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
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		
		string s;
		cin >> s;
		int x;
		cin >> x;
		int l = s.size();
		string w;
		foru(i,0,l){
			w.pb('-');
		}
		
		bool impossible = false;
		foru(i,0,l){
			if(s[i]=='1'){
				bool flag = false;
				if(i-x >= 0){
					if(w[i-x] == '-' || w[i-x] == '1'){
						w[i-x] = '1';
						flag = true;
					}
				}
				if(!flag){
					if(i+x < l){
						if(w[i+x] == '-' || w[i+x] == '1'){
							w[i+x] = '1';
							flag = true;
						}
						else{
							impossible = true;
						}
					}
					else{
						impossible = true;
					}
				}	
			}
			else{
				if(i-x >= 0){
					if(w[i-x] == '1')
						impossible = true;
					else
						w[i-x] = '0';
				}
				if(i+x < l){
					if(w[i+x] == '1')
						impossible = true;
					else
						w[i+x] = '0';
				}
			}
			if(impossible) break;
		}
		if(impossible) pt(-1);
		else{
			foru(i,0,l){
				if(w[i] == '-'){
					w[i] = '0';
					if(i-x >= 0){
						if(s[i-x] == '1'){
							w[i] = '1';
						}
					}
					if(x+i < l){
						if(s[x+i] == '1'){
							w[i] = '1';
						}
					}
				}
			}
			pt(w);
		}
		
		
		
	}
}



