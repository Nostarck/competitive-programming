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
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;

vector<ii> v;
int invalidos[1100];

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	
	int n,x1,y1,x2,y2,x3,y3;
	cin >> n >> x1 >> y1;
	while(n--){
		cin >> x2 >> y2;
		v.push_back(make_pair(x2,y2));
	}
	
	int r = 0;
	int l = v.size();
	for(int i = 0; i < l; i++){
		x2 = v[i].first;
		y2 = v[i].second;
		if(invalidos[i] != -1){
			for(int j = i+1; j<l; j++){
				x3 = v[j].first;
				y3 = v[j].second;
				
				if((x2-x1)*(y3-y1) == (x3-x1)*(y2-y1)){
					invalidos[j] = -1;
				}
				
			}
			invalidos[i] = -1;
			r++;
		}
	}
	cout << r << endl;
	
	
}










