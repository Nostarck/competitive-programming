
#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define pt(x) cout << x << "\n"
#define sz(c) ((int)c.size())
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>


vector<vector<int>> g(20005);
int distancias[20005];
int visitados[20005];

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	for(int i = 1; i <= 10000; i++){
		g[i].push_back(i-1);
		g[i].push_back(i*2);
	}
	
	
	int n,k;
	cin >> n >> k;
	queue<int> q;
	q.push(n);
	visitados[n] = 1;
	distancias[n] = 0;
	while(!q.empty()){
		int padre = q.front();
		q.pop();
		int l = g[padre].size();
		for(int i = 0; i < l; i++){
			int hijo = g[padre][i];
			if(!visitados[hijo]){
				visitados[hijo] = 1;
				distancias[hijo] = distancias[padre]+1;
				q.push(hijo);
			}
			else{
				if(distancias[padre]+1 < distancias[hijo]){
					distancias[hijo] = distancias[padre]+1; 
				}
			}
		}
	}
	
	cout << distancias[k] << endl;
}





