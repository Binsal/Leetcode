class Solution {
public:
    
    struct Node{
        Node *one_bit=NULL;
        Node *zero_bit=NULL;
    };
    
    Node *root=new Node();
    
    void insert(int num){
        Node *ptr=root;
        
        for(int i=31;i>=0;i--){
            
            if((num>>i)&1){
                if(ptr->one_bit==NULL){
                    ptr->one_bit=new Node();
                }
                ptr=ptr->one_bit;
            }
            else{
                  if(ptr->zero_bit==NULL){
                    ptr->zero_bit=new Node();
                }
                ptr=ptr->zero_bit;
            }
            
        }
        
    }
    
    int max_xor(int num){
         Node *ptr=root;
        if(ptr->one_bit==NULL && ptr->zero_bit==NULL)return  -1;
       
        
        int ans=0;
        
        for(int i=31;i>=0;i--){
          if((num>>i)&1){
              if(ptr->zero_bit){
                   ans+=pow(2,i);
                  ptr=ptr->zero_bit;
              }
              else{
                 
                  if(ptr->one_bit)  ptr=ptr->one_bit;
              }
          }
          else{
              if(ptr->one_bit){
                   ans+=pow(2,i);
                  ptr=ptr->one_bit;
              }
              else{
                 
                  if(ptr->zero_bit)ptr=ptr->zero_bit;
              }
          }
        }
        
        return ans;
    }
    
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        vector<vector<int>>q;
        vector<int>ans(queries.size(),0);
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<queries.size();i++){
            q.push_back({queries[i][1],queries[i][0],i});
        }
        
        int j=0;
        
        sort(q.begin(),q.end());
        
        for(int i=0;i<queries.size();i++){
            int threshold=q[i][0];
            int val=q[i][1];
            
            while(j<nums.size() && nums[j]<=threshold){
                insert(nums[j]);
                j++;
            }
            
            ans[q[i][2]]=max_xor(val);
        }
        
        return ans;
    }
};