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
    vector<Node*> vectorize(Node *head)
    {
        vector<Node*> n;
        while(head != nullptr)
        {
            n.push_back(head);
            head = head->next;
        }   
        
        return n;
    }
    
    void revSegment(vector<Node*> &nodes, int i, int j)
    {
        for(; i < j; i ++, j--)
        {
            Node* temp;
            temp = nodes[i];
            nodes[i] = nodes[j];
            nodes[j] = temp;
        }
    }
   
    Node *reverse(Node *head, int k)
    {
        vector<Node*> nodes = vectorize(head);
        int length = nodes.size();

        revSegment(nodes, 0, k - 1);
        revSegment(nodes, k, length - 1);
        for(int i = 0; i < length - 1; i++)
        {
            nodes[i]->next = nodes[i + 1];
        }
        
        nodes[length - 1]->next = nullptr;
        return nodes[0];
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