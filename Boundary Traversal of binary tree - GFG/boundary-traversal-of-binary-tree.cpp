//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}









// } Driver Code Ends
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
void left_traversal( Node *root,vector<int>&ans)
{
    //base case
    if(root==NULL||(root->left==NULL&&root->right==NULL))
    {
        return;
        
    }
     ans.push_back(root->data);
     
     if(root->left)
    { left_traversal(root->left,ans);}
     else
    { left_traversal(root->right,ans);}
}
void right_traversal( Node *root,vector<int>&ans)
{
    //base case
    if(root==NULL||(root->left==NULL&&root->right==NULL))
    {return;}
     
     
     if(root->right)
   {  right_traversal(root->right,ans);}
     else
     {right_traversal(root->left,ans);}
     ans.push_back(root->data);
}
void   leaftrav(Node *root,vector<int>&ans)
{
    if(root==NULL)
    {return;}
    if(root->left==NULL&&root->right==NULL)
    {
        ans.push_back(root->data);
        return;
    }
     leaftrav(root->left,ans);
      leaftrav(root->right,ans);
}

// // void   leaftra_inrightsubtree(Node *root,vector<int>&ans)
// // {
  
// //     if(root==NULL||(root->left==NULL&&root->right==NULL))
// //     {
// //         ans.push_back(root->data);
// //         return;
// //     }
    
    
   
// //       leaftra_inleftsubtree(root->left,ans);
// //       leaftra_inleftsubtree(root->right,ans);
      
// // }
    vector <int> boundary(Node *root)
    {
        //Your code here
        //base case
          vector <int> ans;
        if(root==NULL)
        {return ans;}
        
        ans.push_back(root->data);
        //there will ba three type of the traversal
        //1> lefttraversal
        //2>leaftra_inleftsubtree
        //3>leaftra_inrightsubtree
        //4>righttraversal
        left_traversal(root->left,ans);
        leaftrav(root->left,ans);
         leaftrav(root->right,ans);
          right_traversal(root->right,ans);
    
        return ans;
        
        
        
        
        
        
        
        
        
        
    //     void lefttraversal(Node* root,vector<int> &ans){
    //     if(root==NULL || (root->left==NULL && root->right==NULL)){
    //         return;
    //     }
    //     ans.push_back(root->data);
    //     if(root->left){
    //         lefttraversal(root->left,ans);
    //     }else{
    //         lefttraversal(root->right,ans);
    //     }
    // }
    // void leaftraversal(Node* root,vector<int> &ans){
    //     if(root==NULL){
    //         return;
    //     }
    //     if(root->left==NULL &&root->right==NULL){
    //         ans.push_back(root->data);
    //         return;
    //     }
    //     leaftraversal(root->left,ans);
    //     leaftraversal(root->right,ans);
    // }
    // void righttraversal(Node* root,vector<int> &ans){
    //     if((root==NULL) || (root->left==NULL && root->right==NULL)){
    //         return;
    //     }
    //     if(root->right){
    //         righttraversal(root->right,ans);
    //     }else{
    //         righttraversal(root->left,ans);
    //     }
    //     ans.push_back(root->data);
    // }
    // // vector <int> boundary(Node *root)
    // {
    //     //Your code here
    //     vector<int> ans;
    //     if(root==NULL){
    //         return ans;
    //     }
    //     ans.push_back(root->data);
    //     lefttraversal(root->left,ans);
    //     leaftraversal(root->left,ans);
    //     leaftraversal(root->right,ans);
    //     righttraversal(root->right,ans);
    //     return ans;
    


    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends