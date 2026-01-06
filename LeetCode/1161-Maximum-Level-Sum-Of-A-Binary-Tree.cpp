/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //hashmap with level - sum
    //then go through the hashmap and return the level with maximum sum
    // to calculate the hashmap -> bfs with (node-level)

    int maxLevelSum(TreeNode* root) {
        map<int,int> levelScore;
        queue<pair<TreeNode*,int>> bfsQueue;

        bfsQueue.push({root,1});
        while(!bfsQueue.empty()){
            TreeNode* currentNode = bfsQueue.front().first;
            int currentLevel = bfsQueue.front().second;
            bfsQueue.pop();
            levelScore[currentLevel] += currentNode->val;
            if(currentNode->left != nullptr){
                bfsQueue.push({currentNode->left, currentLevel + 1});
            }
            if(currentNode->right != nullptr){
                bfsQueue.push({currentNode->right, currentLevel + 1});
            }
            
        }
        int maxLevelSum = levelScore[1];
        int maximalLevel = 1;
        for(map<int,int>::iterator it = levelScore.begin(); it != levelScore.end(); ++it){
            if(it->second > maxLevelSum){
                maxLevelSum = it->second;
                maximalLevel = it->first;
            }
        }
        return maximalLevel;
    }
};