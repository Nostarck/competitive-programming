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
	
	
	int t; cin >> t;
	
	while(t--){
		
		int n;
		string s;
		cin >> n;
		cin >> s;
		
		vector<int> v;
		int count = 1;
		foru(i,1,n){
			if(s[i] == s[i-1]){
				count++;
			}
			else{
				v.pb(count);
				count = 1;
			}
		}
		v.pb(count);
		int l = v.size();
	
		int act,i,j;
		act = i = 0;
		j = l - 1;
		int ops = 0;
		while(act<j){
			
			if(v[act] > 1){
				v[act] = 0;
				act++;
				ops++;
			}
			else{
				bool f = false;
				while(i < l && !f){
					if(v[i] > 1){
						v[i]--;
						act++;
						ops++;
						f = true;
						break;
					}
					i++;
				}
				if(!f){
					j--;
					ops++;
					act++;
				}
			}	
		}
		
		if(act==j){
			ops++;
		}
		pt(ops);

	}
	
}



