class Solution {
  public:
    vector<int> topView(Node *root) {
        queue<pair<Node*,int>>q; //node and HD (Horizontal distance)
        map<int,int>m; //HD,node
        vector<int>ans;

        q.push({root,0});
        while(!q.empty()){
            Node* currNode=q.front().first;
            int currHD=q.front().second;
            q.pop();
            
            if(m.find(currHD)==m.end()){
                m[currHD]=currNode->data;
            }
            
            if(currNode->left!=NULL){
                q.push({currNode->left,currHD-1});
            }
            
            if(currNode->right!=NULL){
                q.push({currNode->right,currHD+1});
            }
        }
        
        for(auto i:m){
            ans.push_back(i.second);
        }
            
            return ans;    
    }
};