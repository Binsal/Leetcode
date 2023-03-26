class Solution {
public:
    int minimumSum(int num) {
        int ans;
        
        vector<int>v;
        
        while(num){
            v.push_back(num%10);
            num=num/10;
        }
        
        sort(v.begin(),v.end());
        
        int num1=0;
        int num2=0;
        
        for(int i=0;i<v.size();i++){
            if(i%2==0){
                num1=num1*10+v[i];
            }
            else{
                num2=num2*10+v[i];
            }
        }
        
        ans=num1+num2;
        
        return ans;
    }
};