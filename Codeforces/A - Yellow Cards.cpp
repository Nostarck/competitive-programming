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

int minimo(int a,int b,int ka, int kb,int t){
    int s1 = (ka*a) - a;
    int s2 = (kb*b) - b;
    int tot = s1+s2;
    t -= tot;
    if(t > 0) return t;
    else return 0;
}
int maximo(int a,int b,int ka, int kb,int t){
    int expulsados = 0;
    while(true){
        
        if(ka <= kb){
            if(a){
                if(t-ka >= 0){
                    t-=ka;
                    expulsados++;
                    a--;
                }
                else{
                    break;
                }
            }
            else if(b){
                if(t-kb >= 0){
                    t-=kb;
                    b--;
                    expulsados++;
                }
                else{
                    break;
                }
            }
            if(!a && !b) break;
        }
        else{
            if(b){
                if(t-kb >= 0){
                    t-=kb;
                    expulsados++;
                    b--;
                }
                else{
                    break;
                }
            }
            else if(a){
                if(t-ka >= 0){
                    t-=ka;
                    a--;
                    expulsados++;
                }
                else{
                    break;
                }
            }
            if(!a && !b) break;
        }
        
    }
    return expulsados;
}

int main(){

    int a,b,ka,kb,tarjetas;
    cin >> a >> b >> ka >> kb >> tarjetas;
    cout << minimo(a,b,ka,kb,tarjetas) << " ";
    cout << maximo(a,b,ka,kb,tarjetas);
    
    


}
