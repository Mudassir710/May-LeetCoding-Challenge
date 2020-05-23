/*
Mohammed Mudassir Mohiuddin
Kth Smallest Element in a BST:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3335/
*/

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int res = 0, cnt = 0;
        find(root, k, cnt, res);
        return res;
    }
    
protected:
    void find(TreeNode* node, int k, int &cnt, int &res)
    {
        if(!node || cnt >= k) return;
        find(node->left, k, cnt, res);
        if(++cnt == k)
        {
            res = node->val;
            return;
        }
        find(node->right, k, cnt, res);
    }
};