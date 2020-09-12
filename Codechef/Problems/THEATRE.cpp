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


int p0w(int x){
    switch(x){
        case 0: return 1;
        case 1: return 2;
        case 2: return 4;
        case 3: return 8;
    }
}
int main(){
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(0);
	vector<map<char,int>> v;
	int precios[] = {25,50,75,100};
	int rmax = 0;
	int t; cin >> t; 
	while(t--){
	    v = vector<map<char,int>> (4);
    	foru(i,0,4){
    	    v[i].insert(make_pair('A',0));
    	    v[i].insert(make_pair('B',0));
    	    v[i].insert(make_pair('C',0));
    	    v[i].insert(make_pair('D',0));
    	}
    	
    	int n; cin >> n;
    	char c; int val;
    	foru(i,0,n){
    	    cin >> c >> val;
    	    if(val == 12){
    	        v[0][c]++;
    	    }
    	    else if(val == 3){
    	        v[1][c]++;
    	    }
    	    else if(val == 6){
    	        v[2][c]++;
    	    }
    	    else if(val == 9){
    	        v[3][c]++;
    	    }
    	}
    	
    	int r = -INF;
    	foru(i,0,4){
    	    foru(j,0,4){
    	        foru(k,0,4){
    	            foru(l,0,4){
    	                
    	                if((p0w(i)|p0w(j)|p0w(k)|p0w(l)) == 15){
    	                    //cout << i << " " << j << " " << k << " " << l << endl;
    	                    
    	                    
    	                    foru(i2,0,4){
    	                        foru(j2,0,4){
    	                            foru(k2,0,4){
    	                                foru(l2,0,4){
    	                                    if((p0w(i2)|p0w(j2)|p0w(k2)|p0w(l2)) == 15){
    	                                       //cout << "con precios ";
    	                                       //cout << i2 << " " << j2 << " " << k2 << " " << l2 << endl; 
    	                                       int total = 0;
    	                                       int op1,op2,op3,op4;
    	                                       op1 = v[0][i+'A'] * precios[i2];
    	                                       total += !op1?-100:op1;
    	                                       op2 = v[1][j+'A'] * precios[j2];
    	                                       total += !op2?-100:op2;
    	                                       op3 = v[2][k+'A'] * precios[k2];
    	                                       total += !op3?-100:op3;
    	                                       op4 = v[3][l+'A'] * precios[l2];
    	                                       total += !op4?-100:op4;
    	                                       //cout << total << endl;
    	                                       r = max(total,r);
    	                                       
    	                                    }
    	                                }
    	                            }
    	                        }   
    	                    }
    	                
    	                    
    	                    
    	                }
    	            }
    	        }
    	    }
    	}
    	
    	pt(r);
    	rmax += r;
    	v.clear();
	}
	pt(rmax);
	

}
