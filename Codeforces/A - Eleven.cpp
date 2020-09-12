#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	int N,next,before;
	cin >> N;
	cout << "O";
	before = 1;
	next = 2;
	int aux;
	for(int i = 2; i <= N; i++){
		if(i == next){
			cout << "O";
			aux = next;
			next = next+before;
			before = aux;
		}
		else{
			cout << "o";
		}
	}
	int p; 
	cin >> p;
	
}
