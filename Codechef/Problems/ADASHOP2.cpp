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

vector<ii> sec;
vector<ii> primeros;

void imprimir(int i){
    int l = sec.size();
    for(;i<l;i++){
        int a,b;
        a = sec[i].first; b = sec[i].second;
        printf("%i %i\n",b,a);
    }
}


int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
    sec.pb(make_pair(4,8)); sec.pb(make_pair(1,5)); sec.pb(make_pair(5,1));
    sec.pb(make_pair(8,4)); sec.pb(make_pair(5,7)); sec.pb(make_pair(3,5));
    sec.pb(make_pair(5,3)); sec.pb(make_pair(6,4)); sec.pb(make_pair(5,5));
    
    sec.pb(make_pair(2,8)); sec.pb(make_pair(1,7)); sec.pb(make_pair(7,1));
    sec.pb(make_pair(8,2)); 
    
    sec.pb(make_pair(5,5)); sec.pb(make_pair(7,7)); sec.pb(make_pair(8,6));
    sec.pb(make_pair(6,8)); sec.pb(make_pair(7,7)); sec.pb(make_pair(8,8));
    sec.pb(make_pair(1,1)); sec.pb(make_pair(2,2)); sec.pb(make_pair(3,1));
    sec.pb(make_pair(1,3));
    int pasos = 23; 
    
    primeros.pb(make_pair(1,5)); primeros.pb(make_pair(2,6)); 
    primeros.pb(make_pair(3,7)); primeros.pb(make_pair(5,7)); 
    primeros.pb(make_pair(6,6)); primeros.pb(make_pair(7,5)); 
    primeros.pb(make_pair(8,4));
    
    int t; scanf("%i",&t);
    int x,y;
    while(t--){
        scanf("%i %i",&y,&x);
        int l = primeros.size();
        if(y==8 && x==4){
            printf("22\n");
            imprimir(1);
        }
        else if(abs(x-4) == abs(y-8)){
            printf("23\n");
            imprimir(0);
        }
        else{
            foru(i,0,l){
                if(abs(x-primeros[i].first) == abs(y-primeros[i].second)){
                    printf("24\n");
                    printf("%i %i\n",primeros[i].second,primeros[i].first);
                    imprimir(0);
                    break;
                }
            }
        }
    }
    
    
    
        
     

}
