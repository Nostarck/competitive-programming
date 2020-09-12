#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int main(){
	int pos = 0;
	for(int i = 0; i < 32; i++){
		for(int j = 0; j < i; j++){
			v.push_back((1<<i) + (1<<j));
		}
	}
	v.push_back(0);
	int it; vector<int>::iterator low;
	int t,n; cin >> t;
	while(t--){
		cin >> n;
		if(n <= 2){
			cout << (n == 1? 2 : 1) << "\n";
		}
		else{
			
			low = lower_bound(v.begin(),v.end(),n);
			it = low-v.begin();
			if(v[it] == n) cout << "0\n";
			else cout << min(v[it] - n, n - v[it-1]) << "\n";
		}
	}
	
	return 0;	
}