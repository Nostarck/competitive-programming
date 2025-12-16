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
    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target) {
        queue<TreeNode*> q;
        q.push(root1);
        while(!q.empty()){
            TreeNode* currentNode = q.front();
            q.pop();
            if(Find(target-currentNode->val, root2)){
                return true;
            }
            if(currentNode->left != nullptr){
                q.push(currentNode->left);
            }
            if(currentNode->right != nullptr){
                q.push(currentNode->right);
            }
        }
        return false;
    }

    bool Find(int target, TreeNode* node){
        if(node == nullptr) return false;
        if(target == node->val) return true;
        if(node->left == nullptr && node->right == nullptr){
            return false;
        }
        if(target < node->val){
            return Find(target, node->left);
        }
        else{
            return Find(target, node->right);
        }
    }
};