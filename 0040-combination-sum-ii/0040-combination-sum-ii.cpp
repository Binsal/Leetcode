class Solution {
public:
     vector<vector<int>>v ;
    
    void rec(int idx,int target,vector<int>&candidates,vector<int>&temp){
        if(target==0){
            v.push_back(temp);
            return ;
        }
        
      
         for(int i=idx;i<candidates.size();i++)
        {
             if(candidates[i]>target)break;
             if(i>idx && candidates[i]==candidates[i-1])continue;
            temp.push_back(candidates[i]);  //consider the current element i
            
            rec(i+1,target-candidates[i],candidates,temp); // generate combinations
             
            temp.pop_back(); //proceed to next element

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        rec(0,target,candidates,temp);
        
       
        return v; //return answer
    }
};