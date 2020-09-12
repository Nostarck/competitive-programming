

#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << " "
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>
#define BLACK 0
#define RED 1

map<int,int> x_map;
map<int,int> y_map;


int solve(int x, int y){
	int lx,ly;
	lx = ly = 0;
	x_map[x] = lx;
	y_map[y] = ly;
	lx++; ly++;
	while(true){
		if(x_map.count(y)){
			return x_map[y] + y_map[y] + 1;
		}
		else if(y_map.count(x)){
			return x_map[x] + y_map[x] + 1;
		}
		else{
			y/=2;
			x/=2;
			x_map.insert(make_pair(x,lx));
			y_map.insert(make_pair(y,ly));
			lx++;
			ly++;
		}
	}
}


int getColor(int x){
	int c = 0;
	while(x > 0){
		c++;
		x/=2;
	}
	return c;
}


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	
	cin.tie(0);
	int n; cin >> n;
	string q;
	int tree_color = BLACK;
	int x,y;
	while(n--){
		cin >> q;
		if(q[1] == 'b'){
			cin >> x >> y;
			int l = solve(x,y);
			int node_color = !(( (getColor(x)%2) && tree_color == BLACK ) || (!(getColor(x)%2) && tree_color == RED ));
			if(!(l%2) || ( (l%2) && node_color != BLACK)) pt(l/2);
			else pt((l/2)+1);
			x_map.clear();
			y_map.clear();
		}
		else if(q[1] == 'r'){
			cin >> x >> y;
			int l = solve(x,y);
			int node_color = !(( (getColor(x)%2) && tree_color == BLACK ) || (!(getColor(x)%2) && tree_color == RED ));;
			if(!(l%2) || ( (l%2) && node_color != RED )) pt(l/2);
			else pt((l/2)+1);
			x_map.clear();
			y_map.clear();
		}
		else{
			tree_color ^= 1;
		}
	}
	
	
	
}





