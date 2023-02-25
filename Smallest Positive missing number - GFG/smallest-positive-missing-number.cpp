//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // priority_queue<int,vector<int>,greater<int>>pq;
        
        // for(int i=0;i<n;i++){
        //     pq.push(arr[i]);
        // }
        
        sort(arr,arr+n);
       
       int num=1;
       
       
      for(int i=0;i<n;i++){
          
           if(arr[i]==num){
                num++;
           }
       }
       
       return num;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends