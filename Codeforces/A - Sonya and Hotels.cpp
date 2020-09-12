#include<bits/stdc++.h>
using namespace std;
long long int arr[110];

int main(){
	
	long long int n,d; cin >> n >> d;
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	long long int pos; long long int r = 2; bool nice; long long int pos2;
	if(n == 2){
		if(arr[0] + d < arr[1]){
			if((abs(arr[1] - arr[0])) >= d*2){
				r += (abs(arr[1] - arr[0]) - 1) / d >= 2? 2 : 1;
			}
			//if(((arr[1] - arr[0]) / d) % 2 != 0) r++;
		}
		 	
		
	}
	else{
		for(int i = 0; (i < n-1); i++){
			if(arr[i] + d < arr[i+1]){
				if((abs(arr[i+1] - arr[i])) >= d*2){
					//cout << ((abs(arr[i+1] - arr[i]) - 1) / d ) << endl;
					r += (abs(arr[i+1] - arr[i]) - 1) / d >= 2? 2 : 1;
				}
			}
		}
	}
	cout << r << endl;
	
	//5 2
	//4 8 11 18 19
	return 0;	
}
