
#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>


char board[110][110];

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	for(int i = 0; i < 110; i++){
		for(int j = 0; j < 110; j++){
			board[i][j] = 'S';
		}
	}
	int n,k;
	cin >> n >> k;
	
	for(int i = 0; i < n && k; i++){
		for(int j = (i%2); j<n && k; j+=2){
			board[i][j] = 'L';
			k--;
		}
	}
	
	if(!k){
		cout << "YES\n";
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << board[i][j];
			}
			
			cout << "\n";
		}
	}
	
	else{
		cout << "NO\n";
	}
	
}





