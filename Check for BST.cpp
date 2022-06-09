
class Solution
{
    public:
   
    //Function to check whether a Binary Tree is BST or not.
    bool bsthelper(Node*root,long min ,long max)
    {
        if(root==NULL)
        {
            return true;
            
        }
        if(root->data<=min or root->data>=max)
        {
            return false;
        }
        return bsthelper(root->left,min,root->data) && bsthelper(root->right,root->data,max);
    }
    bool isBST(Node* root) 
    {
       return bsthelper(root,LONG_MIN,LONG_MAX);
       
    }
};




