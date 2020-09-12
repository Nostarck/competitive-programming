	//http://coj.uci.cu/24h/problem.xhtml?pid=1004
	#include<bits/stdc++.h>
	using namespace std;
	
	int main(){
		
		int T,x,y;
		char arr2[2] = {'U','D'}; char arr1[2] = {'L','R'};
		scanf("%i",&T);
		while(T--){
			
			scanf("%i %i",&x,&y);
			printf("%c\n",(x>y? arr2[y%2] : arr1[x%2]));
		}
	}
