class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ind=0;
        
        sort(citations.begin(),citations.end(),greater<int>());
        
        int n=citations.size();
        
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=i+1)ind++;
           
        }
        
        return ind;
    }
};