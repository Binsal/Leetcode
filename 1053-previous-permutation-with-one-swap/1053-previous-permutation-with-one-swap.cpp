class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n=arr.size();
        int left = -1;
        
        for(int i = n-1; i>0; i--){
            if(arr[i-1]>arr[i]){
                left = i-1;
                break;
            }
        }
        
        if(left == -1)
            return arr;
        
        int right = left+1;
        
        for(int i = left+1; i<n; i++){
            if(arr[i]< arr[left] && arr[right] < arr[i]) 
                right = i;
        }
        
        swap(arr[left],arr[right]);
        
        return arr;

    }
};