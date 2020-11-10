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
	string s;
	
	while(t--){
		int len;
		cin >> len;
		cin >> s;
		
		ll r1 = 0;
		ll r2 = 0;
		bool flag = true;
		bool flag2 = true;
		for(int i = 0; i < len;i++){
			if(s[i]-'0' != (i%2)) flag = false;
			else if(!flag){flag=true;r1++;}
			if(s[i]-'0' != !(i%2)) flag2 = false;
			else if(!flag2){flag2=true;r2++;}
		}
		if(!flag) r1++;
		if(!flag2) r2++;
		pt(min(r1,r2));
	}
}



