/*
Mohammed Mudassir Mohiuddin
Cousins in Binary Tree:-  https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/
*/


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
    bool isCousins(TreeNode* root, int x, int y) {
        if (root == NULL) 
            return false;  
        TreeNode* parentOfA = NULL;  
        TreeNode* parentOfB = NULL;
        
        queue<pair<TreeNode*, TreeNode*> > q; 
        pair<TreeNode*, TreeNode*> element;
        int levelsize; 
        
        TreeNode* parentofroot = new TreeNode(-1);   
        q.push(make_pair(root, parentofroot)); 
        
        while (!q.empty()) {
        levelsize = q.size(); 
        while (levelsize--) { 
            element = q.front(); 
            q.pop(); 

            if (element.first->val == x) { 
                parentOfA = element.second; 
            } 
  
            if (element.first->val == y) { 
                parentOfB = element.second; 
            } 
   
            if (element.first->left) { 
                q.push(make_pair(element.first->left, element.first)); 
            } 
  
            if (element.first->right) { 
                q.push(make_pair(element.first->right, element.first)); 
            } 
   
            if (parentOfA && parentOfB) 
                break; 
        } 
  
        if (parentOfA && parentOfB) 
            return parentOfA != parentOfB; 

        if ((parentOfA && !parentOfB) || (parentOfB && !parentOfA)) 
            return false; 
    } 
  
    return false; 
        
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

