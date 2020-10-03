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
 /*https://leetcode.com/submissions/detail/403743702/*/
typedef long long int ll;
class Solution {
public:
    
    
    int getSum(TreeNode* node, ll actualSum){
        
        if(node->left == NULL && node->right == NULL){
            return (actualSum*10) + node->val;
        }
        ll sumLeft,sumRight;
        sumLeft = sumRight = 0;
        if(node->left != NULL){
            sumLeft = getSum(node->left,actualSum*10+node->val);
        }
        if(node->right != NULL){
            sumRight = getSum(node->right,actualSum*10+node->val);
        }
        
        return sumLeft + sumRight;
    }
    
    
    int sumNumbers(TreeNode* root) {
        return root!=NULL? getSum(root,0):0;
    }
};