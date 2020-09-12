#include<bits/stdc++.h>
using namespace std;

int posib[110][110];
char mat[110][110];

int main(){
	
	int n,x,r = 0; cin >> n >> x;
	for(int i = 0; i < n; i++) scanf("%s",mat[i]);	
	int cx,cy;
	queue<int> qx,qy; bool si;
	for(int i = 0; i < n; i++){
		for(int k = 0; k <= n-x; k++){
			si = true;
			for(int j = k; j < k+x; j++){
				if(mat[i][j] == '#') si = false;
				qx.push(i); qy.push(j);
			}
			if(si){
				for(int borrar = 0; borrar < x; borrar++){
					posib[qx.front()][qy.front()]++;
					r = max(r,posib[qx.front()][qy.front()]);
					qx.pop(); qy.pop();
				}
			}
			else{
				for(int borrar = 0; borrar < x; borrar++){
					qx.pop(); qy.pop();
				}
			}
		}
	}
	for(int j = 0; j < n; j++){
		for(int k = 0; k <= n-x; k++){
			si = true;
			for(int i = k; i < k+x; i++){
				if(mat[i][j] == '#') si = false;
				qx.push(i); qy.push(j);
			}
			if(si){ 
				for(int borrar = 0; borrar < x; borrar++){
					posib[qx.front()][qy.front()]++;
					r = max(r,posib[qx.front()][qy.front()]);
					qx.pop(); qy.pop();
				}
			}
			else{
				for(int borrar = 0; borrar < x; borrar++){
					qx.pop(); qy.pop();
				}
			}
		}
	}
	if(r == 0) cout << "1 1\n";
	else{
		si = true;
		for(int i = 0; i < n && si; i++){
			for(int j = 0; j < n && si; j++){
				if(r == posib[i][j]){
					cout << i+1 << " " << j+1 << "\n";
					si = false;
				}
			}
		}
	}
	return 0;
}
