#include<bits/stdc++.h>
using namespace std;
/*3 3
16 24 60
498 861 586
14 24 62
62 557 819
16 15 69
435 779 232

2
1
3*/
vector< vector< pair<int,int> > > problems;
vector< pair<int,int> > resp;


int main(){
	pair<int,int> par;
	int p,s,n; cin >> p >> s;
	for(int i = 0; i < p; i++){
		vector< pair <int,int> > aux(s);
		for(int j = 0; j < s; j++) cin >> aux[j].first;
		for(int j = 0; j < s; j++) cin >> aux[j].second;
		problems.push_back(aux);
		sort(problems[i].begin(),problems[i].end());
		
		n = 0;
		for(int j = 0; j < s-1; j++) if(problems[i][j].second > problems[i][j+1].second) n++;
		par.first = n; par.second = i;
		resp.push_back(par);
		
	}
	
	sort(resp.begin(),resp.end());
	for(int i = 0; i < p; i++) cout << resp[i].second+1 << "\n";
	
	
	return 0;	
}
