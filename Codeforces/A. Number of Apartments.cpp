#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>



int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--){
		
		int n; 
		cin >> n;
		
		int a,b,c;
		a = b = c = 0;
		
		while(n>0){
			if(n==3){
				a++;
				n-=3;
			}
			else if(n == 5){
				b++;
				n-=5;
			}
			else if(n == 7){
				c++;
				n-=7;
			}
			else{
				a++;
				n-=3;
			}
		}
		
		if(!n){
			cout << a << " " <<  b << " " << c << "\n";
		}
		else{
			pt(-1);
		}
	}
	
	
}



