class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ch='I';
        
        int low=0;
        int high=letters.size()-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            
            if(letters[mid]-'a'<=target-'a'){
                low=mid+1;
            }
            else{
                ch=letters[mid];
                high=mid-1;
            }
        }
        
        if(ch=='I')return letters[0];
        return ch;
    }
};