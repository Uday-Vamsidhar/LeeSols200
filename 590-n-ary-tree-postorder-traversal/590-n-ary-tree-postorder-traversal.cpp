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
    vector<int> postorder(Node* root) 
    {
        if(root==NULL)
            return {};
        
        stack<Node*> stk;
        stk.push(root);
        vector<int> res;
        
        while(!stk.empty())
        {
            Node* tmp=stk.top();
            stk.pop();
            for(auto i:tmp->children)
                stk.push(i);
            res.push_back(tmp->val);
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};