#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

int abcS[30];
int abcP[30];

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	//ios::sync_with_stdio(false);
	//cin.tie(0);

	int t; cin >> t;
	while(t--){
		for(int i = 0; i < 26; i++) abcS[i] = abcP[i] = 0;
		string s; cin >> s;
		string p; cin >> p;
		
		int ls = s.size();
		for(int i = 0; i < ls; i++)
			abcS[s[i]-'a']++;
		
		
		int lp = p.size();
		for(int i = 0; i < lp; i++)
			abcP[p[i]-'a']++;
		
		for(int i = 0; i < 26; i++){
			
			if(p[0]== i+'a'){
				
				int nextchar = 0;
				for(int j = 1; j < lp; j++){
					 if(p[j] != p[0]){
						 nextchar = j;
						 break;
					 }
				}
				if(nextchar && p[nextchar] < p[0]){
					cout << p;
					for(int j = 0; j < 26; j++){
						abcS[j]-=abcP[j];
						abcP[j] = 0;
					}
				}
				else{
					while(abcS[i] > abcP[i]){
						cout << (char)(i+'a');
						abcS[i]--;
					}
					cout << p;
					for(int j = 0; j < 26; j++){
						abcS[j]-=abcP[j];
						abcP[j] = 0;
					}
				}
			}
			
			while(abcS[i] > abcP[i]){
				cout << (char)(i+'a');
				abcS[i]--;
			}
			
		}
		cout << "\n";
	}
	
	
	
}
/*
 1
 aaabbkkkkyzzz
 kazk
 */


