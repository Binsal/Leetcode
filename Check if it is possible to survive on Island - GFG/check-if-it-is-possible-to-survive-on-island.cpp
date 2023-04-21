//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
       if(M>N)return -1;
       
       if(N>7 && N==M)return -1;
       
       int days=(S*M)/N;
      
       
       if((S*M)%N){
            days=(S*M)/N+1;
           
        //   return (S*M)/N+1;
       }
        
       int noOfSundays=S/7;
       if(days>S-noOfSundays)return -1;
       //if(days>7 && S*M>(N*(days-noOfSundays)))return -1;
       return days;;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends