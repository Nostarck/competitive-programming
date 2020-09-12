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

map<ll,ll> m;
int arr[100];
int maxi = 1;
int dp[100][100];


bool solve(int i, int j){
    
    foru(k,i,j){
        if(!arr[k] || !arr[k+1]) return false;
        if(arr[k] > arr[k+1]) return false;
    }
    return true;
}

int main(){
    
    int n; cin >> n;
    forue(i,1,n) cin >> arr[i];
    
    
    if(solve(1,16)) pt(16);
    else if(solve(1,8) || solve(9,16)) pt(8);
    else if(solve(1,4) || solve(5,8) || solve(9,12) || solve(13,16)) pt(4);
    else if(solve(1,2) || solve(3,4) || solve(5,6) || solve(7,8)) pt(2);
    else if(solve(9,10) || solve(11,12) || solve(13,14) || solve(15,16)) pt(2);
    else pt(1);
    
}
