/*
Mohammed Mudassir Mohiuddin
Construct Binary Search Tree from Preorder Traversal:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3339/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       if(!preorder.size()) return 0;
        
        TreeNode* root = new TreeNode(preorder[0]);
        //root->val = ;
        
        for(int i=1; i<preorder.size(); ++i)
        {
            bool flag = false;
            TreeNode* curr = root;
            
            while(flag == false)
            {
                if(curr->val > preorder[i])
                {
                    if(curr->left == NULL)
                    {
                        curr->left = new TreeNode(preorder[i]);
                        flag = true;
                    }
                    else
                        curr = curr->left;                       
                }
                else
                {
                    if(curr->right == NULL)
                    {
                        curr->right = new TreeNode(preorder[i]);
                        flag = true;
                    }
                    else
                        curr = curr->right;
                }       
           }
       } 
        return root;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

