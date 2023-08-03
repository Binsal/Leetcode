class Solution {
public:
    
    void rec(string str,string options[],int nums,vector<string> &v){
        if(nums==0){
            v.push_back(str);
        }
        
        int n=nums%10;
        string st=options[n];
        
        for(int i=0;i<st.length();i++){
            rec(st[i]+str,options,nums/10,v);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector <string> v;
        string str="";
        
        if(digits==""){
            return v;
        }
        
        string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        rec(str,options,stoi(digits),v);
        return v;
    }
};