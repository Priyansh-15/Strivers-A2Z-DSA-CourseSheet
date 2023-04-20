// URL : https://practice.geeksforgeeks.org/problems/binary-tree-representation/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-tree-representation

class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        queue<node*>q;
        q.push(root0);
        for(int i=1;i<vec.size();)
        {
            node * root=q.front();
            q.pop();
            root->left = newNode(vec[i]);
            q.push(root->left);
            i++;
            if(i<vec.size())
            {
                root->right = newNode(vec[i]);
                i++;
                q.push(root->right);
            }
        }
    }

};
