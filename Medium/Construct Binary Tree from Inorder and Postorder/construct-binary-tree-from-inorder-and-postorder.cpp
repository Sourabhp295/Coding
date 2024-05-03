//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
    public:

    //Function to return a tree created from postorder and inoreder traversals.
 Node* treeC(int in[],int ins,int ine,int post[],int ps,int pe,unordered_map<int,int>&mp){
  if(ins>ine || ps>pe) return NULL;
  Node* root=new Node(post[pe]);
  int rootPos=mp[root->data];
  int leftNode=rootPos-ins;
  root->left=treeC(in,ins,rootPos-1,post,ps,ps+leftNode-1,mp);
  root->right=treeC(in,rootPos+1,ine,post,ps+leftNode,pe-1,mp);
  return root;
}
Node* buildTree(int in[], int post[], int n) {
    //write your code here
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++){
    mp[in[i]]=i;
  }
  Node* root=treeC(in,0,n-1,post,0,n-1,mp);
  return root;
}
};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends