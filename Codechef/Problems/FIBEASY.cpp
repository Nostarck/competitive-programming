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
typedef unsigned long long int ull;
 
int digits [] = {0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 
				 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 
				 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 
				 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 
				 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 
				 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};
 
ll potMenor(ull n){
	if(n == (n&-n)) return n; //Si es potencia, queda igual
	int i = 0;
	while(n){
		n>>=1;
		i++;
	}
	return 1ll<<(i-1);
}
 
int main()
{
	int casos;
	scanf("%d",&casos);
	ll num;
 
	while(casos--){
		scanf("%lld",&num);
		//if(num == 1) printf("0\n");
		printf("%d\n",digits[((potMenor(num) - 1)%60)]);
	}
	return 0;
}