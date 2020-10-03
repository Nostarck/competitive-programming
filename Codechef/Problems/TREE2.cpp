#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>


set<int> conjunto;

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; 
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		for(int i = 0; i < n; i++){
			int num;
			cin >> num;
			if(num) conjunto.insert(num);
		}
		/*
		for(set<int>::iterator it = conjunto.begin(); it != conjunto.end(); it++){
			cout << *it << endl;
		}
*/		
		cout << conjunto.size() << "\n";
		conjunto.clear();
	}
	
	
}



