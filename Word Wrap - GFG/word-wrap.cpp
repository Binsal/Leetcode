//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:

int dp[501][2001];

    int rec(vector<int>nums,int k,int ind,int rem){
        if(ind>=nums.size())return 0;
        
        if(dp[ind][rem]!=-1)return dp[ind][rem];
        int take=INT_MAX;
        
        if(nums[ind]<=rem){
            take=rec(nums,k,ind+1,rem-nums[ind]-1);
        }
        
        int nottake=(rem+1)*(rem+1)+rec(nums,k,ind+1,k-nums[ind]-1);
        
        
        dp[ind][rem]=min(take,nottake);
        return dp[ind][rem];
    }
    
    int solveWordWrap(vector<int>nums, int k) 
    { 
        //vector<vector<int>>dp(501,vector<int>(2001,-1));
        int ind=0;
        int rem=k;
        memset(dp,-1,sizeof(dp));
        return rec(nums,k,ind,rem);
    } 
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}
// } Driver Code Ends