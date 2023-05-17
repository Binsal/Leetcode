class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int count=0;
        vector<int>vec(1001,0);
        
        for(int i=0;i<answers.size();i++)vec[answers[i]]++;
        
        for(int i=0;i<=1000;i++){
        
            if(vec[i]>0){
                if(i==0)count+=vec[i];
              
                else{
                     int no_of_same_groups=vec[i]/(i+1);
                    int rem=vec[i]%(i+1);
                    count+=(no_of_same_groups)*(i+1);
                    if(rem)count+=i+1;
                
            }
        
        }
        
        }
        return count;
    }
};