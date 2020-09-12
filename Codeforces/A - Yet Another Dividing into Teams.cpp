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
 
int arr[110];
 
int main(){
 
    int q,n;
    cin >> q;
    while(q--){
        cin >> n;
        int x; foru(i,0,n) cin >> arr[i];
        sort(arr,arr+n);
        int r = 1;
        foru(i,1,n) if(abs(arr[i]-arr[i-1]) == 1) r = 2;
        pt(r);
        
       
    }
}
