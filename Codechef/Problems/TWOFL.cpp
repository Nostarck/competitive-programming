#include<bits/stdc++.h>
using namespace std;
int mat[2005][2005];
int companion[2005][2005][4];
queue<int> limx,limy;
int vis[2005][2005];

void limpiar(int n,int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            vis[i][j] = 0;
        }
    }
}

void limpiezarapida(){
    while(!limx.empty()){
        vis[limx.front()][limy.front()] = 0;
        limx.pop(); limy.pop();
    }
}

int main(){
    
    int n,m,i,j; scanf("%i %i",&n,&m);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%i",&mat[i][j]);
            if(i+1 < n) companion[i][j][0] = 1;
            else companion[i][j][0] = -1;
            if(i-1 > -1) companion[i][j][1] = 1;
            else companion[i][j][1] = -1;
            if(j+1 < m) companion[i][j][2] = 1;
            else companion[i][j][2] = -1;
            if(j-1 > -1) companion[i][j][3] = 1;
            else companion[i][j][3] = -1;
            
        }
    }
    
    //int companion[4];
    int cuenta = 0,respuesta = 0,x,y;
    limpiar(n,m);
    
    //empiezo la solucion
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            
            
                
                if(companion[i][j][0] != -1){
                    
                    queue<int> qx,qy;
                    qx.push(i); qy.push(j);
                    limx.push(i); limy.push(j);
                    vis[i][j] = 1; cuenta = 0;
                    
                    while(!qx.empty()){
                        x = qx.front(); y = qy.front();
                        limx.push(x); limy.push(y);
                        qx.pop(); qy.pop();
                        cuenta++;
                        if(x+1 < n && (mat[x+1][y] == mat[i][j] || mat[x+1][y] == mat[i+1][j])){
                            if(!vis[x+1][y]){
                                vis[x+1][y] = 1;
                                qx.push(x+1); qy.push(y);
                                companion[x][y][0] = -1;
                                companion[x+1][y][1] = -1;
                            }
                            else{
                                companion[x][y][0] = -1;
                                companion[x+1][y][1] = -1;
                            }
                        }
                        
                        if(x-1 > -1 && (mat[x-1][y] == mat[i][j] || mat[x-1][y] == mat[i+1][j])){
                            
                            if(!vis[x-1][y]){
                                vis[x-1][y] = 1;
                                qx.push(x-1); qy.push(y);
                                companion[x][y][1] = -1;
                                companion[x-1][y][0] = -1;
                            }
                            else{
                                companion[x][y][1] = -1;
                                companion[x-1][y][0] = -1;
                            }
                        }
                        
                        if(y-1 > -1 && (mat[x][y-1] == mat[i][j] || mat[x][y-1] == mat[i+1][j])){
                            if(!vis[x][y-1]){
                                vis[x][y-1] = 1;
                                qx.push(x); qy.push(y-1);
                                companion[x][y][3] = -1;
                                companion[x][y-1][2] = -1;
                            }
                            else{
                                companion[x][y][3] = -1;
                                companion[x][y-1][2] = -1;
                            }
                        }
                        
                        if(y+1 < m  && (mat[x][y+1] == mat[i][j] || mat[x][y+1] == mat[i+1][j])){
                            if(!vis[x][y+1]){
                                vis[x][y+1] = 1;
                                qx.push(x); qy.push(y+1);
                                companion[x][y][2] = -1;
                                companion[x][y+1][3] = -1;
                            }
                            else{
                                companion[x][y][2] = -1;
                                companion[x][y+1][3] = -1;
                            }
                        }
                        
                    }
                    
                    if(cuenta > respuesta) respuesta = cuenta;
                    limpiezarapida();
                }
                
                
                
                if(companion[i][j][1] != -1){
                    
                    queue<int> qx,qy;
                    qx.push(i); qy.push(j);
                    limx.push(i); limy.push(j);
                    vis[i][j] = 1; cuenta = 0;
                    
                    while(!qx.empty()){
                        x = qx.front(); y = qy.front();
                        limx.push(x); limy.push(y);
                        qx.pop(); qy.pop();
                        cuenta++;
                        if(x+1 < n && (mat[x+1][y] == mat[i][j] || mat[x+1][y] == mat[i-1][j])){
                            if(!vis[x+1][y]){
                                vis[x+1][y] = 1;
                                qx.push(x+1); qy.push(y);
                                companion[x+1][y][1] = -1;
                                companion[x][y][0] = -1;
                            }
                            else{
                                companion[x+1][y][1] = -1;
                                companion[x][y][0] = -1;
                            }
                        }
                        
                        if(x-1 > -1 && (mat[x-1][y] == mat[i][j] || mat[x-1][y] == mat[i-1][j])){
                            
                            if(!vis[x-1][y]){
                                vis[x-1][y] = 1;
                                qx.push(x-1); qy.push(y);
                                companion[x-1][y][0] = -1;
                                companion[x][y][1] = -1;
                            }
                            else{
                                companion[x-1][y][0] = -1;
                                companion[x][y][1] = -1;
                            }
                        }
                        
                        if(y-1 > -1 && (mat[x][y-1] == mat[i][j] || mat[x][y-1] == mat[i-1][j])){
                            if(!vis[x][y-1]){
                                vis[x][y-1] = 1;
                                qx.push(x); qy.push(y-1);
                                companion[x][y-1][2] = -1;
                                companion[x][y][3] = -1;
                            }
                            else{
                                companion[x][y-1][2] = -1;
                                companion[x][y][3] = -1;
                            }
                        }
                        
                        if(y+1 < m  && (mat[x][y+1] == mat[i][j] || mat[x][y+1] == mat[i-1][j])){
                            if(!vis[x][y+1]){
                                vis[x][y+1] = 1;
                                qx.push(x); qy.push(y+1);
                                companion[x][y+1][3] = -1;
                                companion[x][y][2] = -1;
                            }
                            else{
                                companion[x][y+1][3] = -1;
                                companion[x][y][2] = -1;
                            }
                        }
                        
                    }
                    if(cuenta > respuesta) respuesta = cuenta;
                    limpiezarapida();
                }
                
                if(companion[i][j][2] != -1){
                    
                    queue<int> qx,qy;
                    limx.push(i); limy.push(j);
                    qx.push(i); qy.push(j);
                    vis[i][j] = 1; cuenta = 0;
                    
                    while(!qx.empty()){
                        x = qx.front(); y = qy.front();
                        limx.push(x); limy.push(y);
                        qx.pop(); qy.pop();
                        cuenta++;
                        if(x+1 < n && (mat[x+1][y] == mat[i][j] || mat[x+1][y] == mat[i][j+1])){
                            if(!vis[x+1][y]){
                                vis[x+1][y] = 1;
                                qx.push(x+1); qy.push(y);
                                companion[x+1][y][1] = -1;
                                companion[x][y][0] = -1;
                            }
                            else{
                                companion[x+1][y][1] = -1;
                                companion[x][y][0] = -1;
                            }
                        }
                        
                        if(x-1 > -1 && (mat[x-1][y] == mat[i][j] || mat[x-1][y] == mat[i][j+1])){
                            
                            if(!vis[x-1][y]){
                                vis[x-1][y] = 1;
                                qx.push(x-1); qy.push(y);
                                companion[x-1][y][0] = -1;
                                companion[x][y][1] = -1;
                            }
                            else{
                                companion[x-1][y][0] = -1;
                                companion[x][y][1] = -1;
                            }
                        }
                        
                        if(y-1 > -1 && (mat[x][y-1] == mat[i][j] || mat[x][y-1] == mat[i][j+1])){
                            if(!vis[x][y-1]){
                                vis[x][y-1] = 1;
                                qx.push(x); qy.push(y-1);
                                companion[x][y-1][2] = -1;
                                companion[x][y][3] = -1;
                            }
                            else{
                                companion[x][y-1][2] = -1;
                                companion[x][y][3] = -1;
                            }
                        }
                        
                        if(y+1 < m  && (mat[x][y+1] == mat[i][j] || mat[x][y+1] == mat[i][j+1])){
                            if(!vis[x][y+1]){
                                vis[x][y+1] = 1;
                                qx.push(x); qy.push(y+1);
                                companion[x][y+1][3] = -1;
                                companion[x][y][2] = -1;
                            }
                            else{
                                companion[x][y][2] = -1;
                                companion[x][y+1][3] = -1;
                            }
                        }
                        
                    }
                    if(cuenta > respuesta) respuesta = cuenta;
                    limpiezarapida();
                }
                
                
                if(companion[i][j][3] != -1){
                    
                    queue<int> qx,qy;
                    limx.push(i); limy.push(j);
                    qx.push(i); qy.push(j);
                    vis[i][j] = 1; cuenta = 0;
                    
                    while(!qx.empty()){
                        x = qx.front(); y = qy.front();
                        limx.push(x); limy.push(y);
                        qx.pop(); qy.pop();
                        cuenta++;
                        if(x+1 < n && (mat[x+1][y] == mat[i][j] || mat[x+1][y] == mat[i][j-1])){
                            if(!vis[x+1][y]){
                                vis[x+1][y] = 1;
                                qx.push(x+1); qy.push(y);
                                companion[x+1][y][1] = -1;
                                companion[x][y][0] = -1;
                            }
                            else{
                                companion[x+1][y][1] = -1;
                                companion[x][y][0] = -1;
                            }
                        }
                        
                        if(x-1 > -1 && (mat[x-1][y] == mat[i][j] || mat[x-1][y] == mat[i][j-1])){
                            
                            if(!vis[x-1][y]){
                                vis[x-1][y] = 1;
                                qx.push(x-1); qy.push(y);
                                companion[x-1][y][0] = -1;
                                companion[x][y][1] = -1;
                            }
                            else{
                                companion[x-1][y][0] = -1;
                                companion[x][y][1] = -1;
                            }
                        }
                        
                        if(y-1 > -1 && (mat[x][y-1] == mat[i][j] || mat[x][y-1] == mat[i][j-1])){
                            if(!vis[x][y-1]){
                                vis[x][y-1] = 1;
                                qx.push(x); qy.push(y-1);
                                companion[x][y-1][2] = -1;
                                companion[x][y][3] = -1;
                            }
                            else{
                                companion[x][y-1][2] = -1;
                                companion[x][y][3] = -1;
                            }
                        }
                        
                        if(y+1 < m  && (mat[x][y+1] == mat[i][j] || mat[x][y+1] == mat[i][j-1])){
                            if(!vis[x][y+1]){
                                vis[x][y+1] = 1;
                                qx.push(x); qy.push(y+1);
                                companion[x][y+1][3] = -1;
                                companion[x][y][2] = -1;
                            }
                            else{
                                companion[x][y+1][3] = -1;
                                companion[x][y][2] = -1;
                            }
                        }
                        
                    }
                    if(cuenta > respuesta) respuesta = cuenta;
                    limpiezarapida();
                }
                
                
            
        }
    }
    
    
    printf("%i",respuesta);
    
    
    return 0;
}
