//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        // code here
        
        vector<int> dips;
        Node *s=head;
        
        while(s!=NULL)
        {
            dips.push_back(s->data);
            s=s->next;
        }
        int str=0,end=k-1;
        while(str<end)
        {
            swap(dips[str],dips[end]);
            str++;
            end--;
        }
        str=k,end=dips.size()-1;
        while(str<end)
        {
            swap(dips[str],dips[end]);
            str++;
            end--;
        }
        s=head;
        int i=0;
        while(s!=NULL)
        {
            s->data=dips[i++];
            s=s->next;
        }
        return head;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends