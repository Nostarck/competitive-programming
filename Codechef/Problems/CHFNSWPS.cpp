#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>
map<int,int> cuenta;
map<int,int> m1;
map<int,int> m2;

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x; 
		for(int i = 0; i < n; i++){
			cin >> x;
			cuenta[x]++;
			m1[x]++;
		}
		for(int i = 0; i < n; i++){
			cin >> x;
			cuenta[x]++;
			m2[x]++;
		}
		
		//cuento si es posible
		bool pos = true;
		for(map<int,int>::iterator it = cuenta.begin(); it != cuenta.end() && pos; it++){
			if(it->second%2) pos = false;
		}
		if(pos){
			// si hay un cero hay que seguir al otro
			
			ll r = 0;
			
			
			for(map<int,int>::iterator it = cuenta.begin(); it != cuenta.end(); it++){
				if(m1.count(it->first)){
					m1[it->first] -= it->second/2;
				}
				if(m2.count(it->first)){
					m2[it->first] -= it->second/2;
				}
			}
			
			int ini1,fin1,ini2,fin2;
			ini1 = ini2 = 0;
			fin1 = m1.size();
			fin2 = m2.size();
			
			map<int,int>::iterator base1,base2,top1,top2;
			base1 = m1.begin();
			base2 = m2.begin();
			top1 = m1.end();
			top1--;
			top2 = m2.end();
			top2--;
			
				
			while(ini1<fin1 && ini2 < fin2){
				//cout << endl << endl;
				//cout << "base 1 =  " << base1->first << " - " << base1->second << endl;
				//cout << "top 1  =  " << top1->first << " - " << top1->second << endl;
				//cout << "base 2  =  " << base2->first << " - " << base2->second << endl;
				//cout << "top 2  =  " << top2->first << " - " << top2->second << endl;
			
				if(base1->second <= 0){
					base1++;
					ini1++;
				}
				else if(base2->second <= 0){
					base2++;
					ini2++;
				}
				else if(top1->second <= 0){
					top1--;
					fin1--;
				}
				else if(top2->second <= 0){
					top2--;
					fin2--;
				}
				else{
					//cout << "POR FIN" << endl;
					if(top1->first > top2->first){
						if(base1->first * 2 <= base2->first){
							r += base1->first*2;
							top1->second--;
							top2->second--;
						}
						else{
							r+=base2->first;
							top1->second--;
							base2->second--;
						}
					}
					else{
						if(base2->first * 2 <= base1->first){
							r += base2->first*2;
							top1->second--;
							top2->second--;
						}
						else{
							r+=base1->first;
							top2->second--;
							base1->second--;
						}
					}
				}
			}
			
			pt(r);
		}
		else cout << -1 << "\n";
		cuenta.clear();
		m1.clear();
		m2.clear();
		
		
	}
	
}
