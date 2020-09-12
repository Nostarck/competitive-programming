

#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

int vis[100010];
vector<vector<int>> jumps(10);
int visDig[10];




int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	for(int i = 0; i < 100010; i++) vis[i] = INF;
	
	
	string s;
	cin >> s;
	int lens = s.size();
	
	for(int i = 0; i < lens; i++){
		jumps[s[i]-'0'].push_back(i);
	}
	
	queue<int> q;
	q.push(0);
	vis[0] = 0;
	
	while(!q.empty()){
		
		
		int act = q.front();
		int peso = vis[act]+1;
		q.pop();
		
		// visito todos los digitos de este digito 
		if(!visDig[s[act]-'0']){
			int l = jumps[s[act]-'0'].size();
			for(int j = 0; j < l; j++){
				if(vis[jumps[s[act]-'0'][j]]>peso){
					vis[jumps[s[act]-'0'][j]] = peso;
					q.push(jumps[s[act]-'0'][j]);
				}
			}
			visDig[s[act]-'0']=1;
		}
		
		if(act>1){
			if(vis[act-1] > peso){
				vis[act-1] = peso;
				q.push(act-1);
			}
		}
		if(act<lens-1){
			if(vis[act+1]>peso){
				vis[act+1] = peso;
				q.push(act+1);
			}
		}
	}
	
	pt(vis[lens-1]);
	
	
	
	
	
	
	
	
}





