//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<vector>

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    bool checkPalindrome(vector<int> &dips)
    {
        int s=0;
        int e=dips.size()-1;
        while(s<=e)
        {
            if(dips[s]!=dips[e])
            {
                return false;

            }
            s++;
            e--;
        }
        return true;
    }
    bool isPalindrome(Node *head)
    { 
             Node* temp=head;
               if ( head == NULL||head->next==NULL)
                  return true;

             vector<int> dips;
             while(temp!=0)
             {
                 dips.push_back(temp->data);
                 temp=temp->next;
             }
             return checkPalindrome(dips);
        //Your code here
    }
        

};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends