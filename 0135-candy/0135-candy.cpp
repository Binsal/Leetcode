class Solution {
public:
    int candy(vector<int>& ratings) {
        int count=0;
        vector<int>candies(ratings.size(),1);
        
        for(int i=0;i<ratings.size()-1;i++){
            if(ratings[i+1]>ratings[i] && candies[i+1]<=candies[i]){
                candies[i+1]=candies[i]+1;
            }
        }
        
         for(int i=ratings.size()-1;i>=1;i--){
            if(ratings[i-1]>ratings[i] && candies[i-1]<=candies[i]){
                candies[i-1]=candies[i]+1;
            }
        }
        
        
        for(auto x:candies)count+=x;
        return count;  
    }
};