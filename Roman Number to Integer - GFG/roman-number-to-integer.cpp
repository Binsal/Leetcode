//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        int val=0;
        
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        for(int i=0;i<str.size()-1;i++){
            //cout<<mp[str[i]]<<" "<<mp[str[i+1]];
            if(mp[str[i]]>=mp[str[i+1]])val+=mp[str[i]];
            else val-=mp[str[i]];
        }
        
        
        if(mp[str.size()-1]<=mp[str.size()-2])val+=mp[str[str.size()-1]];
        else val-=mp[str[str.size()-1]];
        
        
        return val;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends