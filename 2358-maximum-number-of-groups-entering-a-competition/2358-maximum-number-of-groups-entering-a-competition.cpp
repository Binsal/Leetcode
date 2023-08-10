class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(),grades.end());
        
        int group=0;
        int prevsum=0;
        int prevno=0;
        int sum=0;
        int no=0;
        
        for(int i=0;i<grades.size();i++){
            
            sum+=grades[i];
            no++;
            
            if(sum>prevsum && no>prevno){
                group++;
                prevsum=sum;
                prevno=no;
                sum=0;
                no=0; 
            }
            
        }
    
        return group;
    }
};