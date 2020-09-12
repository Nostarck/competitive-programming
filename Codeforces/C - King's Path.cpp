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


map<ii,ll> grafo;


int xs[] = {-1,-1,-1,0,0,1,1,1};
int ys[] = {-1,0,1,-1,1,-1,0,1};

int main(){

	int x0,x1,y0,y1;
	cin >> x0 >> y0 >> x1 >> y1;
	int n;
	cin >> n;

	foru(i,0,n){

		int r,a,b;
		cin >> r >> a >>b;

		forue(j,a,b){
			grafo[make_pair(r,j)] = -1;
		}
	}

	grafo[make_pair(x0,y0)] = 0;
	grafo[make_pair(x1,y1)] = -1;

	queue<ii> q;
	q.push(make_pair(x0,y0));

	while(!q.empty()){

		ii actual = q.front();
		q.pop();
		//cout << actual.fst << " " << actual.snd << " = " << grafo[make_pair(actual.fst,actual.snd)] << endl;
		

		foru(i,0,8){

			if(grafo.count(make_pair(actual.fst + xs[i], actual.snd + ys[i]))){
				
				if(grafo[make_pair(actual.fst + xs[i], actual.snd + ys[i])] == -1){
					q.push(make_pair(actual.fst + xs[i], actual.snd + ys[i]));
					grafo[make_pair(actual.fst + xs[i], actual.snd + ys[i])] = grafo[make_pair(actual.fst, actual.snd)] + 1;
				}
			}
		}

	}

	pt(grafo[make_pair(x1,y1)]);




	




    
    
    


}
