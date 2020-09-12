#include<bits/stdc++.h>
using namespace std;

int main(){
	double k,n,s,p;
	cin >> k >> n >> s >> p;
	double nec = n/s;
	int r;
	if(floorl(nec) == nec) r = nec;
	else r = nec+1;
	r *= k;
	int r2 = 0;
	while(r > 0){
	 r2++; r-=p;
	}
	cout << r2 << "\n";
	
	
	
	return 0;	
}
