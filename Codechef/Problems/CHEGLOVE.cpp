#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	int T; scanf("%i",&T);
	while(T--){
		
		int nf; scanf("%i",&nf);
		int hf[nf]; int gf[nf];
		for(int i = 0; i < nf; i++) scanf("%i",&hf[i]);
		for(int i = 0; i < nf; i++) scanf("%i",&gf[i]);
		
		bool front,back; front = back = true;
		
		for(int i = 0; i < nf; i++){
			if(hf[i] > gf[i]) front = false;
			if(hf[i] > gf[nf-i-1]) back = false;
		}
		
		if(front && back){
			printf("both\n");
		}
		else if(!front && !back){
			printf("none\n");
		}
		else{
			printf("%s\n",front? "front" : "back");
		}
		
		
		
		
		
	}
	
}