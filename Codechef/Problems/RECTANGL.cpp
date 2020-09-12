#include <bits/stdc++.h>
using namespace std;


int main(){
	
	int T;
	cin >> T;
	
	while(T--){
		vector<int> lados(4);
		cin >> lados[0] >> lados[1] >> lados[2] >> lados[3];
		sort(lados.begin(),lados.begin()+4); 
		if(lados[0] == lados[1] && lados[2] == lados[3]){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
	
	
}