#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
#define tam 8*8
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>


char board[tam];


void fill(){
	for(int i = 0; i < tam; i++){
			board[i]= 'X';
	}
}

void remove(int n){
	for(int i = 1; i < n; i++){
		board[i] = '.';
	}
}

void print(){
	for(int i = 0; i < tam; i++){
		cout << board[i];
		if(!((i+1)%8)) cout << "\n";
	}
}

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	int n;
	while(t--){
		
		cin >> n;
		fill();
		board[0] = 'O';
		if(n>1){
			remove(n);
		}
		print();
		cout << "\n";
		
	}
	
}





