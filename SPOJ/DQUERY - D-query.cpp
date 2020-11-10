#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define foru(i,a,b) for(int i=(a); i<(b); i++)
#define forue(i,a,b) for(int i=(a); i<=(b); i++)
#define forb(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define pt(x) cout << x << "\n"
#define sz(c) ((int)c.size())
typedef pair<int,int> ii;
typedef long long int ll;


int a[30005];
int frequency[1000005];
int ans[200005];
int currentAns;
int blockSize;


struct Query{
	int L,R,i; 
};

bool cmp(Query query1, Query query2){
	if(query1.L / blockSize != query2.L / blockSize){
		return query1.L/blockSize < query2.L / blockSize;
	}
	return query1.R < query2.R;
}

void add(int i){
	frequency[a[i]]++;
	if(frequency[a[i]] == 1){
		currentAns++;
	}
}

void remove(int i){
	frequency[a[i]]--;
	if(!frequency[a[i]]){
		currentAns--;
	}
}

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	
	
	int n;
	cin >> n;
	blockSize = sqrt(n) + 1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int qn;
	cin >> qn;
	vector<Query> queries(qn);
	int l,r;
	for(int i = 0; i < qn; i++){
		
		cin >> l >> r;
		queries.push_back(Query{l,r,i});
	}
	
	sort(queries.begin(),queries.end(), cmp);
	
	int currentL = 0;
	int currentR = -1;
	currentAns = 0;
	for(Query q: queries){
		
		while (currentL > q.L) {
            currentL--;
            add(currentL);
        }
        while (currentR < q.R) {
            currentR++;
            add(currentR);
		}
        while (currentL < q.L) {
            remove(currentL);
            currentL++;
        }
        while (currentR > q.R) {
            remove(currentR);
            currentR--;
        }
        
        ans[q.i] = currentAns;
	}
	
	for(int i = 0; i < qn; i++){
		cout << ans[i] << "\n";
	}
}



