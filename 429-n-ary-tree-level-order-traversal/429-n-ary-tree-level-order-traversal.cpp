/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        queue<Node*> q;
        vector<vector<int>> res;
        
        if(root==NULL)
            return {};
        
        q.push(root);
        
        while(!q.empty())
        {
            int s=q.size();
            vector<int> curlevel;
            for(int i=0;i<s;i++)
            {
                Node* tmp = q.front();
                q.pop();
                curlevel.push_back(tmp->val);
                for(auto n: tmp->children)
                    q.push(n);
            }
            res.push_back(curlevel);
        }
        return res;
    }
};