// URL : https://practice.geeksforgeeks.org/problems/binary-tree-representation/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-tree-representation


class Solution{
    public static void createTree(Node root0, ArrayList<Integer> v ){
        // Code here
        Queue<Node>q =new LinkedList<Node>();
        q.add(root0);
        for(Integer i=1;i<v.size();)
        {
            Node root = q.peek();
            q.remove();
            root.left = new Node(v.get(i));
            i++;
            q.add(root.left);
            if(i<v.size())
            {
                root.right =new Node(v.get(i));
                i++;
                q.add(root.right);
            }
        }
    }
}
