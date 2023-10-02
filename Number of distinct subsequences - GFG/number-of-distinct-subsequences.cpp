//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	   int mod=1e9+7;   
	   int res=0;
	   int added=0;
	   int endswith[26]={};
	   
	   
	   for(auto ch:s){
	       added=(res-endswith[ch-'a']+1)%mod;
	       res=(res+added)%mod;
	       endswith[ch-'a']=(endswith[ch-'a']+added)%mod;
	       
	   }
	   
	  
	   
	   return (res+mod)%mod+1;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends