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

vector<pair<double,int>> pares;


double comparar(int a, int b, int t1, int t2, int k){

	double uno,dos;
	uno = (a*t1)*((100-k)/100.0) + (b*t2);
	dos = (b*t1)*((100-k)/100.0) + (a*t2);
	if(uno > dos) return uno;
	return dos;

}

double comparar2(double a,double b,double epsilon = 0.0000001){

	return fabs(a-b) < epsilon; 
}

int main(){

    
    int n,t1,t2,k;
    cin >> n >> t1 >> t2 >> k;
    int a,b;
    foru(i,0,n){

    	cin >> a >> b;
    	double resultado = comparar(a,b,t1,t2,k);
    	pares.push_back(make_pair(resultado,i+1));
    }

    sort(pares.begin(),pares.end());
    cout << fixed;
    cout << setprecision(2);
    for(int i = n-1; i >= 0; i--){
    	for(int j = i-1; j >= 0; j--){
    		if(comparar2(pares[j].fst,pares[i].fst)){
    			
    			if(pares[j].snd < pares[i].snd){
    				
    				pair<double,int> aux = pares[j];
    				pares[j] = pares[i];
    				pares[i] = aux;
    			}
    		}
    	}
    	cout << pares[i].snd << " " << pares[i].fst << endl;
    }


    


}

