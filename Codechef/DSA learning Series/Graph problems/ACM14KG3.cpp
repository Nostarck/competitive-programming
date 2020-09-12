

#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

/*
Con los mapeos que me dan armo un grafo 
si los string tienen tamaño diferente jamas se va a poder convertir el string 1 en el string 2, entonces en ese caso la respuesta seria NO
si los string tienen el mismo tamaño entonces se recorre letra por letra los 2 strings, si en algun momento la letra del string a fuera diferente a la letra del string b
entonces con el grafo que se armo al principio hago un DFS desde la letra del string 1, para encontrar si esa letra esta relacionada con la letra del string 2 
si encuentra la letra, entonces esa letra se puede convertir en la letra del string 2, sino la encuentra entonces es imposible que el string 1 se convierta en el string 2
si termino de recorrer los strings sin problemas entonces si se pueden convertir en el mismo string

al recorrer los strings tiene un O(n) y en el peor caso por cada letra se puede hacer un DFS completo, el grafo tiene a lo mucho 26 nodos porque son 26 letras, y 26*25/2 aristas entonces el DFS tiene un O(26 + 26*25/2) 
daria un total de O(n * (26 + 26*25/2)) 
*/


int vis[26];
int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--){
		vector<vector<int>>g(26);
		string s1,s2;
		cin >> s1 >> s2;
		int nm;
		cin >> nm;
		string mapeo;
		while(nm--){
			cin >> mapeo;
			g[mapeo[0]-'a'].push_back(mapeo[3]-'a');
		}
		
		int l = s1.size();
		bool yes = s1.size() == s2.size();
		for(int i = 0; i < l && yes; i++){
			
			if(s1[i]!=s2[i]){
				
				//empiezo dfs
				stack<int> stk;
				stack<int> ceros;
				
				stk.push(s1[i]-'a');
				ceros.push(stk.top());
				
				int d = s2[i]-'a';
				vis[s1[i]-'a'] = 1;
				
				bool fnd = false;
				
				while(!stk.empty() && !fnd){
					int act = stk.top();
					stk.pop();
					
					int glen = g[act].size();
					for(int j = 0; j < glen && !fnd; j++){
						if(!vis[g[act][j]]){
							if(g[act][j] == d) fnd = true;
							else{
								vis[g[act][j]] = 1;
								stk.push(g[act][j]);
								ceros.push(g[act][j]);
							}
						}
					}
				}
				while(!ceros.empty()){
					vis[ceros.top()] = 0;
					ceros.pop();
				}
				
				yes = fnd;
			}
		}
		
		cout << (yes?"YES":"NO") << "\n";
	}
	
	
}





