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
map<int,int> dp;
int arr[300010];
int q;

int solve(int i,int objetivo,int resultado){
    //cout << i << " " << objetivo << " " << resultado << endl;
    i -= 1;
    if(dp.count(i)) return dp[i];
    if(i+1 == objetivo) return resultado;
    else{
        int aux = solve(arr[i],objetivo,resultado+1);
        dp.insert(make_pair(i,aux));
        return aux;
    }
    
}

int main(){
    
    scanf("%i",&q);
    while(q--){
        int n; 
        scanf("%i",&n);
        foru(i,0,n) scanf("%i",&arr[i]);
        foru(i,0,n) printf("%i ",solve(arr[i],i+1,1));
        printf("\n");
        dp.clear();
    }
    
}
