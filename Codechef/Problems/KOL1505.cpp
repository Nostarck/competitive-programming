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

vector<ii> v;

int main(){

   int t; cin >> t;
   while(t--){
       string s1,s2;
       cin >> s1 >> s2;
       string rs1,rs2;
       int l = s1.size();
       char ant = '!';
       foru(i,0,l){
           if(ant != s1[i]){
               rs1 += s1[i];
               ant = s1[i];
           }
       }
       l = s2.size();
       ant = '!';
       foru(i,0,l){
           if(ant != s2[i]){
               rs2 += s2[i];
               ant = s2[i];
           }
       }
       
       if(rs1 == rs2) cout << "Yes\n";
       else cout << "No\n";
       
   }


}
