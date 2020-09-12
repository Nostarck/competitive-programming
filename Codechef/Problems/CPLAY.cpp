#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	char s[21];
	int t[2];
	int r[2];
	int shots;
	bool ganador;
	int posibilidades;
	int meta;
	
	while(scanf("%s",&s) != EOF){
		t[0] = 0; t[1] = 0;
		r[0] = 0; r[1] = 0;
		ganador = false;
		int shot = 0;
		
		while(!ganador && shot < 10 ){
			
			if(s[shot] == '1') t[shot%2]++;
			r[shot%2]++;
			if(5-r[shot%2] + t[shot%2] < t[shot%2 ^ 1]){
				shot++;
				ganador = true; break;				
			}
			
			shot++;
			if(!ganador && (5-r[shot%2] + t[shot%2] < t[shot%2 ^ 1])){
				//printf("2");
				ganador = true; break;
			}
			//shot++;
			
		}
		
		
		while(!ganador && shot < 20){
			
			if(s[shot] == '1') t[0]++;
			shot++;
			if(s[shot] == '1') t[1]++;
			shot++;
			if(t[0] != t[1]) ganador = true;
		}
		
		if(t[0] > t[1]){
			printf("TEAM-A %i\n",shot);
		}
		else if(t[1] > t[0]){
			printf("TEAM-B %i\n",shot);
		}
		else{
			printf("TIE\n");
		}
				
		
	} 
	
	
}