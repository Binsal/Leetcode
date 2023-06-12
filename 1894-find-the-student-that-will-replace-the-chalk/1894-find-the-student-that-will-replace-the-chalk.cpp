class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum=accumulate(chalk.begin(),chalk.end(),0ll);
        long long int fact=(k)/(sum);
       
        if(k%sum==0)return 0;
        // k-=(sum)*fact;
         long long prod=k-(sum)*fact;
        
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]>prod)return i;
            //cout<<k<<endl;
            prod-=chalk[i];
        }
        
        return 0;
    }
};