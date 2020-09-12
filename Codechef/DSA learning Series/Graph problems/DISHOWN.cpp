#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>


int values[10010];
int root[10010];


int find(int a){
	if(a == root[a]) return a;
	else return root[a] = find(root[a]);
}

void Union(int a, int b){
	
	int u = find(a);
	int v = find(b);
	root[u] = v;
	
}

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
		for(int i = 0; i<n; i++){
			cin >> values[i];
			root[i] = i;
		}
		
		int q; 
		cin >> q;
		while(q--){
			
			int mode;
			cin >> mode;
			if(!mode){
				int x,y;
				cin >> x >> y;
				x--;
				y--;
				int rootx,rooty;
				rootx = find(x);
				rooty = find(y);
				if(rootx == rooty){
					cout << "Invalid query!\n"; 
				}
				else{
					if(values[rootx] > values[rooty]){
						Union(rooty,rootx);
					}
					else if(values[rooty] > values[rootx]){
						Union(rootx,rooty);
					}
				}
			}
			else{
				int x;
				cin >> x;
				x--;
				cout << find(x)+1 << "\n";
			}
			
			
		}
	}
	
}
