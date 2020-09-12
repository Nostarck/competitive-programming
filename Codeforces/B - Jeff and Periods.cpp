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

int arr[100000+10];
map<int,int> r;
int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	
	int n; cin >> n;
	foru(i,0,100000+10) arr[i] = -1;
	foru(i,0,n){
		int x; cin >> x;
		if(arr[x] == -1){arr[x] = i; r.insert(make_pair(x,0));}
		else if(r.count(x) && r[x] == 0){
			r.erase(x);
			r.insert(make_pair(x,i-arr[x]));
			//cout << "metiendo " << x << endl;
			arr[x] = i;
		}
		else{
			//cout << x << endl;
			//cout << i << " " << arr[x] << " " << r[x] << endl;
			if(i-arr[x] != r[x]){
				r.erase(x);// cout << "borrando " << x << endl;
				//arr[x] = -1000;
			}
			else{
				arr[x] = i;
			}
		}
	}
	
	pt(r.size());
	for(map<int,int>::iterator it=r.begin(); it!=r.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
	
	
	
}
