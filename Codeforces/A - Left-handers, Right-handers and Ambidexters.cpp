#include<bits/stdc++.h>
using namespace std;
int main(){
	
	
	int l,r,b; cin >> l >> r >> b;
	
	
	while(b>0){
		if(r == l){
			int suma = b/2;
			r+=suma;
			l+=suma;
			b = 0;
		}
		else if(l+b <= r){
			l+=b; b = 0;
		}
		else if(l+b > r && l < r){
			b-= r-l;
			l += (r-l);
		}
		else if(r+b <= l){
			//cout << "entra";
			r+=b; b = 0;
		}
		else if(r+b > l && r < l){
			b-= l-r;
			r += (l-r);
		}
	}
	//xcout << l << endl;
	cout << (r <= l ? r*2: l*2) << endl;
	//int p; cin >> p;
	
	
}
