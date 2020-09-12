#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>


int getPower(int a){
	
	int power = 0;
	while(a>0){
		power+=a%10;
		a/=10;
	}
	return power;
}


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--){
		
		int n,a,b;
		cin >> n; 
		int chef,morty;
		chef = morty = 0;
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			a = getPower(a);
			b = getPower(b);
			
			if(a>b) chef++;
			else if(b>a) morty++;
			else{
				chef++;
				morty++;
			}
		}
		
		if(chef>morty){
			cout << 0 << " " << chef << endl;
		}
		else if(morty>chef){
			cout << 1 << " " << morty << endl;
		}
		else{
			cout << 2 << " " << chef << endl;
		}
	}
	
}





