#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define foru(i,a,b) for(int i=(a); i<(b); i++)
#define forue(i,a,b) for(int i=(a); i<=(b); i++)
#define forb(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define pt(x) cout << x << "\n"
#define sz(c) ((int)c.size())
#define add(a, b, w) g[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;



int main(){

    
	int estudiantes,lazos;
	cin >> estudiantes >> lazos;
	vector<set<int>> grafo(estudiantes+3);
	set<int> uni;
	
		int a,b;
	foru(i,0,lazos){
		cin >> a >> b;
		uni.insert(a); uni.insert(b);
		grafo[a].insert(b);
		grafo[b].insert(a);
	}
	ll r = 0;
	while(true){
		queue<ii> q;
		if(uni.size() == 1) break;
		foru(i,0,estudiantes+3){
			if(grafo[i].size() == 1){

				set<int>::iterator it = grafo[i].begin();
				uni.erase(i);
				q.push(make_pair(i,*it));
			}
		}

		if(q.empty()) break;
		while(!q.empty()){

			ii act = q.front();
			q.pop();

			grafo[act.fst].erase(act.snd);
			grafo[act.snd].erase(act.fst);
		}

		r++;
	}
    
    pt(r);


}
