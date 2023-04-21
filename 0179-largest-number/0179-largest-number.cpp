class Solution {
public:
    
    static bool cmp(int num1,int num2){
        string s1=to_string(num1);
        string s2=to_string(num2);
        
        return s1+s2>s2+s1;
        
    }
    
    string largestNumber(vector<int>& nums) {
        string ans="";
        
        int n=nums.size();
        
        sort(nums.begin(),nums.end(),cmp);
        
        for(auto x:nums)ans+=to_string(x);
        
        if(ans[0]=='0')return "0";
        
        return ans;
    }
};