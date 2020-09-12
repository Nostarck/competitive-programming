#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,g,f,k,rf = 0, rk = 0;
    int gp;
    bool voya = true;
    scanf("%i %i %i %i",&a,&gp,&f,&k);
    g = gp;
    // hacer puta condicion de ya sabes que
    if(g - f < 0) rk = -1;
    while(rk != -1 && rk != k){
        
        if(rk == k-1){
            //printf("ultimo %i \n",voya);
            if(g-a >= 0){
                rk++;
            }
            else{
                if(voya){
                    if(g-f >= 0){
                        if(gp-(a-f) >= 0){
                            rk++; rf++;
                        }
                        else{
                            rk = -1;
                        }
                    }
                    else{
                        rk = -1;
                    }
                }
                else{
                    if(g - (a-f) >= 0){
                        if(gp - (f) >= 0){
                            rk++; rf++;
                        }
                        else rk = -1;
                    }
                    else rk = -1;
                }
            }
        }
        else{
            //printf("ultimo %i %i\n",g,voya);
            if(voya){
                g-=f;
                if(g-((a-f)*2) >= 0){
                    rk++; g-=(a-f); voya = false;
                }
                else{
                    if(gp-((a-f)*2) >= 0){
                        rk++; g = gp-(a-f); voya = false;
                        rf++;
                    }
                    else{
                        rk = -1;
                    }
                }
            }
            else{
                g-=(a-f);
                if(g-(f*2) >= 0){
                    rk++; g-=f; voya = true;
                }
                else{
                    if(gp-(f*2) >= 0){
                        rk++; g = gp-f; voya=true;
                        rf++;
                    }
                    else{
                        rk = -1;
                    }
                }
            }
        }
        //printf("%i\n",rk);
    }
    if(rk == -1) printf("-1\n");
    else{
        printf("%i",rf);
    }
}

    
    

