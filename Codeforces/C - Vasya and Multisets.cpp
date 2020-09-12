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

map<ll,ll> m;
int salio[1010];
int arr[1010];
int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	int n; cin >> n;
	int x;
	foru(i,0,n){
		cin >> arr[i];
		m[arr[i]]++;
	}
		int suma = 0;
		int comodines = 0;
	
		forall(it,m){
			if(it->snd == 1) suma++;
			if(it->snd > 2) comodines = it->fst;
		}
		if(suma&1 && !comodines){
			cout << "NO\n";	
		}
		else{
			cout << "YES\n";
			//cout << suma << " " << comodines << endl;
			if(suma&1 && comodines){
				bool a = true;
				bool comodin = false;
				char charComodin = ' ';
				foru(i,0,n){
					if(m[arr[i]] == 1){
						cout << (a?"A":"B");
						a = !a;
					}
					else if(arr[i] == comodines && !comodin){
						cout << (a?"A":"B");
						a = !a; comodin = true;
						charComodin = (a?'A':'B');
					}
					else{
						if(arr[i] == comodines) cout << charComodin;
						else cout << "A";
					}
				}
			}
			else{
				bool a = true;
				foru(i,0,n){
					if(m[arr[i]] == 1){
						cout << (a?"A":"B");
						a = !a;
					}
					else cout << "A";
				}
			}
		}
	
	
	
	
  	
}
