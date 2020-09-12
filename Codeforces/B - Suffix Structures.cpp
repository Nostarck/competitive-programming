
#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

int abc1[30];
int abc2[30];


int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s1,s2;
	cin >> s1 >> s2;
	
	
	bool automaton = false;
	bool array = false;
	bool tree = false;
	int l1,l2;
	l1 = s1.size(); l2 = s2.size();
	
	if(l1 >= l2){
		
		for(int i = 0; i < l1; i++) abc1[s1[i]-'a']++;
		for(int i = 0; i < l2; i++) abc2[s2[i]-'a']++;
		for(int i = 0; i < 30; i++){
			if(abc1[i]>abc2[i]){
				automaton = true;
			}
			else if(abc2[i]>abc1[i]){
				tree = true;break;
			}
		}
		if(tree){
			cout << "need tree\n";
		}
		else{
			//vemos si ocupa un array
			int i,j;
			i = j = 0;
			while(i<l1 && j<l2){
				if(s1[i]!=s2[j]){
					i++;
				}
				else{
					j++;
					i++;
				}
			}
			if(j<l2) array = true;
			
			if(array && automaton){
				cout << "both\n";
			}
			else if(array){
				cout << "array\n";
			}
			else{
				cout << "automaton\n";
			}
		}
	}
	else{
		cout << "need tree\n";
	}
	
	
}





