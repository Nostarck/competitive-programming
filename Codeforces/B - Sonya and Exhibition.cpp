#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m; cin >> n >> m;
	int x;
	while(m--) cin >> x >> x;
	for(int i = 0; i < n; i++) cout << (i%2? 0 : 1);
	return 0;
}
