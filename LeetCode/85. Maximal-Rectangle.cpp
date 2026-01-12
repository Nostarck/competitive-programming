class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();
        
        int sol = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == '1'){
                    int countR = 0;
                    for(int j2 = j; j2 < m; j2++){
                        if(matrix[i][j2] == '1'){
                            countR++;
                        }
                        else{
                            break;
                        }
                    }
                    sol = max(sol, countR);
                    for(int i2 = i; i2 < n; i2++){
                        if(matrix[i2][j] == '1'){
                            for(int j2 = j; j2 < j+countR && j2 < m; j2++){
                                if(matrix[i2][j2] == '1'){
                                    int nside = i2-i + 1;
                                    int mside = j2-j + 1;
                                    sol = max(sol, nside*mside);
                                }
                                else{
                                    countR = j2 - j;
                                    break;
                                }
                            }
                        }
                        else{
                            break;
                        }
                        
                    }
                }
            }
        }
         return sol;
        
    }
};