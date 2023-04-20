// URL : https://practice.geeksforgeeks.org/problems/preorder-traversal/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=preorder-traversal

vector <int> preorder(Node* root)
{
  // Your code here
    vector<int>ans;
    ans.push_back(root->data);
    if(root->left)
    {
        vector<int>temp=preorder(root->left);
        for(int i=0;i<temp.size();i++)
        {
            ans.push_back(temp[i]);
        }
    }
    if(root->right)
    {
        vector<int>temp=preorder(root->right);
        for(int i=0;i<temp.size();i++)
        {
            ans.push_back(temp[i]);
        }
    }
    return ans;
}
