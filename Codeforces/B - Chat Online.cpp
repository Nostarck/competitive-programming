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

int arr[30100];
int resps[3000];

int main(){

    
    int p,q,l,r;
    cin >> p >> q >> l >> r;
    
    int x,y;
    while(p--){
        cin >> x >> y;
        for(int i = x; i <= y; i++) arr[i] = 1;
    }
    
    int output = 0;
    while(q--){
        cin >> x >> y;
        for(int i = l; i <= r; i++){
            for(int j = x; j <= y; j++){
                
            
                if(arr[j+i]){
                    if(!resps[i]){
                        output++;
                        resps[i]++;
                        break;
                    }
                }
            }
        }
    }
    
    pt(output);
    


}
