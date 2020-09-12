

#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

int root[50];
ll total[50];
ll puta = 0;

ll p0w(int a, int b){
	ll aux = 1;
	for(int i = 0; i < b; i++){
		aux*=a;
	} 
	return aux;
}


int Find(int a){
	if(a == root[a]) return a;
	else return root[a] = Find(root[a]);
}

void Union(int a,int b){
	int u = Find(a);
	int v = Find(b);
	root[u] = v;
}

int main(){
	
	
	int n,m;
	cin >> n >> m;
	for(int i = 0; i < 50; i++){
		root[i] = i;
		total[i] = 0;
	}
	
	for(int i = 0; i < m; i++){
		int a,b;
		cin >> a >> b;
		Union(a-1,b-1);
	}
	
	for(int i = 0; i < 50; i++){
		total[Find(i)]++;
	}
	
	ll resp = 0;
	for(int i = 0; i < 50; i++){
		if(total[i]) resp+=(total[i]-1);
	}
	
	pt(p0w(2,resp));	
	
	
	
}





