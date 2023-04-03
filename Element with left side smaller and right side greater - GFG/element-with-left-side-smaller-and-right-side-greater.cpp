//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    
    int ans;
    int maxi=arr[0];
    
    for(int i=1;i<n-1;i++){
        
       
        if(maxi<=arr[i]){
            int mini=INT_MAX;
            
            for(int j=i+1;j<n;j++){
                mini=min(arr[j],mini);
                if(mini<arr[i])break;
            }
            
            if(mini==INT_MAX)continue;
            
            if(mini>=arr[i]){
                return arr[i];
            }
        }
        
         maxi=max(arr[i],maxi);
        
        
    }
    
    return -1;
}