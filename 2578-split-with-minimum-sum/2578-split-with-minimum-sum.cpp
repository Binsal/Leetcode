class Solution {
public:
    int splitNum(int num) {
        vector<int>v;
        int num1=0;
        int num2=0;
        
        while(num>0){
            v.push_back(num%10);
            num=num/10;
        }
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
            if(i%2==0){
                num1=num1*10+v[i];
            }
            else{
                num2=num2*10+v[i];
            }
        }
        
        int sum=0;
        sum=num1+num2;
        
        return sum;
    }
};