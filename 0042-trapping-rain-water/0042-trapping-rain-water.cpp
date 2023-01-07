class Solution {
public:
    int trap(vector<int>& height) {
        int maxi=0;
        int n=height.size();
        int left=1;
        int right=n-2;
        int leftmost=height[0];
        int rightmost=height[n-1];
        
        while(left<=right){
            if(leftmost<rightmost){
                 if(height[left]<leftmost){
                    maxi+=leftmost-height[left];
                 }
                 else{
                    leftmost=height[left];
                 }
                left++;
            }
            else{
                if(height[right]<rightmost){
                  maxi+=rightmost-height[right];
                }
                else{
                    rightmost=height[right];
                }
                right--;
            }
        }
        
        return maxi;
    }
};