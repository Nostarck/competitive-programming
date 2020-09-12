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

int numero(int a, int b, int c){
	b*=10; c*=100;
	a+=b+c;
	return a;
}

bool calcular(int a,int b,int c){
	return !(numero(a,b,c)%8);
}

int main(){


	cin >> s;

	int n = s.size();
	for(int i = n-1; i > -1; i--){
		int x = s[i]-'0'; 
		if(!(x % 8)){
			cout << "YES\n";
			cout << x << endl;
			return 0;
		}
		for(int j = i-1; j > -1; j--){
			int p = (s[i]-'0' + (s[j]-'0')*10);
			if(!(p%8)){
				cout << "YES\n";
				cout << p << endl;
				return 0;
			}
			for(int k = j-1; k > -1; k--){
				if(calcular(s[i]-'0',s[j]-'0',s[k]-'0')){
					cout << "YES\n";
					cout << numero(s[i]-'0',s[j]-'0',s[k]-'0') << endl;
					return 0;

				}
			}
		}
	}

	cout << "NO\n";
    
    
    


}
