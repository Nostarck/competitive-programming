#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n,x,ant = -1, i = 0; cin >> n;
	int arr[n];
	
	while(n--){
		cin >> x;
		if(x <= ant){
			arr[i++] = ant;
		}
		ant = x;
	}
	arr[i++] = ant;
	cout << i << "\n";
	for(int j = 0; j < i; j++){
		
		cout << arr[j] << " ";
	}
	
	
	return 0;	
}
