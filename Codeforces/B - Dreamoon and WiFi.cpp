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



int solve(int espacios, int xs,int ys){
    
    if(!espacios && !xs && !ys) return 1;
    if(!espacios) return 0;
    
    return solve(espacios-1,xs-1,ys) + solve(espacios-1,xs,ys-1);
}


int main(){

    string s1,s2; 
    cin >> s1 >> s2;
    
    int l = s1.size();
    
    int xs1,ys1;
    xs1 = ys1 = 0;
    int xs2,ys2,espacios;
    espacios = xs2 = ys2 = 0;
    
    foru(i,0,l){
        
        if(s1[i] == '+') xs1++;
        else ys1++;
        
        if(s2[i] == '+') xs2++;
        else if(s2[i] == '-') ys2++;
        else espacios++;
    }
    
    
    double r = 0.000000000000;
    if(xs1 == xs2 && ys1 == ys2) r = 1;
    else{
        if(solve(espacios,xs1-xs2,ys1-ys2) == 0) r = 0;
        else{
            r = solve(espacios,xs1-xs2,ys1-ys2) / pow(2,espacios);
        }
    }
    
    cout << fixed;
    cout << setprecision(9);
    cout << r << endl;
    


}



