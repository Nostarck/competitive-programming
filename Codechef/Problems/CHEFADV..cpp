#include<bits/stdc++.h>
using namespace std;
#define foru(i,a,b) for(int i=(a); i<(b); i++)
#define forb(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define pt(x) cout << x << "\n"
typedef long long int ll;

bool solve(int know,int pow, int x, int y){
	if(know<0 || pow < 0) return false;
	return (know%x == 0 && pow%y == 0);
}


int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m,x,y,t;
    cin >> t;
    while(t--){
    	cin >> n >> m >> x >> y;
    	n--; m--;
    	if(solve(n-1,m-1,x,y) || solve(n,m,x,y)) cout << "Chefirnemo\n";
    	else cout << "Pofik\n";
    }
	
  	
  	
}