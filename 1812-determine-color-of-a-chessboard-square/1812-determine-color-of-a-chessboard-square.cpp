class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        int val1=coordinates[0]-'a';
        int val2=coordinates[1]-'0';
        
        if(val1%2!=0 && val2%2==0)return false;
        if(val1%2!=0 && val2%2!=0)return true;
        
        if(val1%2==0 && val2%2!=0)return false;
        if(val1%2==0 && val2%2==0)return true;
        
        return true;
    }
};