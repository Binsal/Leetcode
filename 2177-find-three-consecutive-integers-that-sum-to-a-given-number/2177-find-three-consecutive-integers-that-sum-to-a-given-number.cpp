class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>v;
        num-=3;
        
        if(num%3!=0)return v;
        else{
            v.push_back(num/3);
            v.push_back(num/3+1);
            v.push_back(num/3+2);
        }
        
        return v;
    }
};