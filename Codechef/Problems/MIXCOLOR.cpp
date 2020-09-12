#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	int t; scanf("%i",&t);
	while(t--){
		int l; scanf("%i",&l);
		int nums[l];
		for(int i = 0; i < l; i++) scanf("%i",&nums[i]);
		sort(nums,nums+l);
		
		int resultado = 0;
		for(int i = 1; i < l; i++){
			if(nums[i] == nums[i-1]) resultado++;
		}
		printf("%i\n",resultado);
		
		
		
	}
	
	
}