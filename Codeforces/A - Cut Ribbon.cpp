#include<bits/stdc++.h>
using namespace std;
int a,b,c,dp[4010];
int solve(int x){
	
	if(x > 0 && dp[x]) return dp[x];
	else{
		if(x == 0) return 0;
		else if(x < 0) return -10000000;
		return dp[x] = max(solve(x-a) , max(solve(x-b), solve(x-c))) + 1;
	}
}

int main(){
	
	int x; cin >> x >> a >> b >> c;
	cout << solve(x) << endl;
	return 0;	
}
