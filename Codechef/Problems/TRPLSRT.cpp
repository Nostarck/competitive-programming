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
//static_cast<double>


map<int,int> m;
int orden[200040];
int arr[200040];




int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	ll n,k;
	
	while(t--){
		cin >> n >> k;
		
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			m.insert(make_pair(arr[i],i));
			orden[i] = arr[i];
		}
		sort(orden,orden+n);
		int a,b,c;
		ll op = 1;
		string r = "";
		for(int i = 0; i < n-2 && op<=k; i++){
			if(arr[i]!=orden[i]){//la pos no esta ordenada
				a = i;
				b = m[orden[a]];
				
				c = m[orden[b]];
				 
				if(c==a){
					if(a+1 != b) c=a+1;
					else c=a+2;
				}
				
				
				r += to_string(op);
				r += "\n";
				r += to_string(c+1) + " " + to_string(b+1) + " " + to_string(a+1);
				r+="\n";
				
				int aux = arr[a];
				arr[a] = arr[b];
				arr[b] = arr[c];
				arr[c] = aux;
				
				m[arr[a]] = a;
				m[arr[b]] = b;
				m[arr[c]] = c;
				
				
				
				cout << "despues del shift " << endl;
				foru(j,0,n) cout << arr[j] << " ";
				cout << endl;
				op++;
			}
		}
		
		cout << "\n";
		if(op>k) r = "-1";
		cout << r << "\n";
		
		
	}
	
	
	
	
	
	
}
/*
1
5 5
4 3 1 2 5
 * 
 * */
