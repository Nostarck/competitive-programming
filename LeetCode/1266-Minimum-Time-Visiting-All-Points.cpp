class Solution {
public:

    int getDistance(int pointAx, int pointAy, int pointBx, int pointBy){
        return max(abs(pointAx-pointBx), abs(pointAy-pointBy));
    }

    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int result = 0;
        int pointAx = points[0][0];
        int pointAy = points[0][1];
        for(int i = 1; i < points.size(); i++){
            int pointBx = points[i][0];
            int pointBy = points[i][1];
            result += getDistance(pointAx, pointAy, pointBx, pointBy);
            pointAx = pointBx;
            pointAy = pointBy;
        }

        
        return result;
    }
};