#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> carta;
    vector<int> cuenta;
    int n; scanf("%i",&n);
    int t = n;
    int num; bool r = true;
    while(t--){
        scanf("%i",&num);
        if(carta.size() == 0){
            carta.push_back(num);
            cuenta.push_back(1);
        }
        else if(carta.size() == 1 && carta[0] != num){
            carta.push_back(num);
            cuenta.push_back(1);
        }
        else{
            if(carta[0] == num) cuenta[0]++;
            else if(carta[1] == num) cuenta[1]++;
            else{
                r = false; 
            }
            
        }
    }
    if(cuenta.size() < 2 || cuenta[0] != n/2 || cuenta[1] != n/2){
        r = false;
    }
    if(r){
        printf("YES\n%i %i\n",carta[0],carta[1]);
    }
    else printf("NO");
    return 0;
}
