class Solution {
public:
    //irection
    int STOPPED = 0;
    int DOWN = 1;
    int UP = 2;
    int RIGHT = 3;
    int LEFT = 4;
    vector<pair<int,int>> directions = {{0,0}, {1,0}, {-1,0}, {0,1}, {0,-1}};
    //BFS
    bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        
        int n,m;
        n = maze.size();
        m = maze[0].size();
        vector<vector<vector<bool>>> visited(maze.size(), vector<vector<bool>>( maze[0].size(), vector<bool>(6,     false)));

        queue<pair<pair<int,int>,int>> bfs; 
        bfs.push({{start[0], start[1]}, STOPPED});
        visited[start[0]][start[1]][STOPPED] = true;
        int i,j,direction;
        int nexti,nextj;
        while(!bfs.empty()){
            direction = bfs.front().second;
            i = bfs.front().first.first;
            j = bfs.front().first.second;
            bfs.pop();
            
            if(direction == STOPPED){
                if(i == destination[0] && j == destination[1]){
                    return true;
                }
                for(int direction = 1; direction < directions.size(); direction++){
                    nexti = i + directions[direction].first;
                    nextj = j + directions[direction].second;
                    if(nexti >= 0 && nexti < n && !visited[nexti][j][direction] && maze[nexti][j] == 0){
                        visited[nexti][j][direction] = true;
                        bfs.push({{nexti,j}, direction});
                    }
                    if(nextj >= 0 && nextj < m && !visited[i][nextj][direction] && maze[i][nextj] == 0){
                        visited[i][nextj][direction] = true;
                        bfs.push({{i,nextj}, direction});
                    }
                }
            }
            else{
                nexti = i + directions[direction].first;
                nextj = j + directions[direction].second;
                if(nexti >= 0 && nexti < n && !visited[nexti][j][direction] && maze[nexti][j] == 0){
                    visited[nexti][j][direction] = true;
                    bfs.push({{nexti,j}, direction});
                }
                else if(nexti >= 0 && nexti < n && !visited[nexti][j][direction] && maze[nexti][j] == 1){
                    visited[i][j][STOPPED] = true;
                    bfs.push({{i,j}, STOPPED});
                }
                else if(nexti < 0 || nexti >= n){
                    visited[i][j][STOPPED] = true;
                    bfs.push({{i,j}, STOPPED});
                }
                
                if(nextj >= 0 && nextj < m && !visited[i][nextj][direction] && maze[i][nextj] == 0){
                    visited[i][nextj][direction] = true;
                    bfs.push({{i,nextj}, direction});
                }
                else if(nextj >= 0 && nextj < m && !visited[i][nextj][direction] && maze[i][nextj] == 1){
                    visited[i][j][STOPPED] = true;
                    bfs.push({{i,j}, STOPPED});
                }
                else if(nextj < 0 || nextj >= m){
                    visited[i][j][STOPPED] = true;
                    bfs.push({{i,j}, STOPPED});
                }
            }
        }
        return false;
    }
};