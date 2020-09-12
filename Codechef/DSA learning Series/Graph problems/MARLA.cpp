#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

int mat[1010][1010];
int vis[1010][1010];
int xs[] = {-1,0,0,1};
int ys[] = {0,-1,1,0};
/* 
 * en el fondo la matriz es un grafo, donde los nodos que compartan un lado y ademas tengan la misma strength estas relacionados
 * entonces lo que hay que hacer es ir haciendo un BFS por cada componente conexo, e ir contando cuantos elementos tenga ese componente.
 * el componente que tenga mas elementos con el menor strength, esa sera la respuesta 
 * con el BFS da o(n+m) pero como recorro toda la matriz para saber cuales nodos no han sido visitados, la solucion se encuentra en O(n*m) 
 **/


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n,m;
	cin >> n >> m;
	ll str,cnt;
	str = INF; 
	cnt = 0;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> mat[i][j];
		}
	}

	queue<pair<int,int>> q;
	pair<int,int> act;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(!vis[i][j]){
				
				vis[i][j] = 1;
				ll str2,cnt2;
				
				str2 = mat[i][j];
				cnt2 = 1;
				q.push(make_pair(i,j));
				
				while(!q.empty()){
					
					act = q.front();
					q.pop();
					
					for(int k = 0; k < 4; k++){
						if(!vis[act.first-xs[k]][act.second-ys[k]]){
							if(mat[act.first-xs[k]][act.second-ys[k]] == str2){
								cnt2++;
								vis[act.first-xs[k]][act.second-ys[k]] = 1;
								q.push(make_pair(act.first-xs[k],act.second-ys[k]));
							}
						}
					}
				}
				if(cnt2==cnt){
					str=min(str,str2);
				}
				else if(cnt2>cnt){
					str = str2;
					cnt = cnt2;
				}
			}
		}
	}

	cout << str << " " << cnt << "\n";

}





