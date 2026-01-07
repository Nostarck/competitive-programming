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
    //dfs to calculate total product each node has accumulate and then just traversal the tree
    //and do the calculations
    unordered_map<TreeNode*,long long int> sumByNode;
    long long MOD = 1000000007;
    long long int getSumTree(TreeNode* node){
        if(node == nullptr) return 0; //base case xd
        long long int sumLeft = getSumTree(node->left);
        long long int sumRight = getSumTree(node->right);
        sumByNode[node] = (sumLeft + sumRight + node->val);
        return sumByNode[node];
    }
    

    int maxProduct(TreeNode* root) {
        long long int totalSum = getSumTree(root);
        long long int maxProductValue = 1;
        for(unordered_map<TreeNode*, long long int>::iterator it = sumByNode.begin(); it != sumByNode.end(); ++it){
            if(it->first != root){
                long long int subTree1 = totalSum - it->second;
                long long int subTree2 = it->second;
                long long int productValue = subTree1 * subTree2;
                maxProductValue = max(maxProductValue, productValue);
            }
        }
        return (int)(maxProductValue%MOD);
    }
};