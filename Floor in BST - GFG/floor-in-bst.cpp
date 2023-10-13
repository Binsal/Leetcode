//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:

    void rec(Node *root,int &val,int x){
        if(root==NULL)return ;
        
          
        rec(root->left,val,x);
        
        if(root->data<=x){
            val=root->data;
            //cout<<val<<endl;
        }
        
         rec(root->right,val,x);
        
      
    }
    
    int floor(Node* root, int x) {
        int val=INT_MIN;
        
        rec(root,val,x);
        
        if(val==INT_MIN)return -1;
        return val;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends