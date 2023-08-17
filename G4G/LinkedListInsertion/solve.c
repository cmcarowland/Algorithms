//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 



// } Driver Code Ends
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution{
  public:
    Node *insertAtBegining(Node *head, int x) 
    {
       Node *n = (Node*)calloc(1, sizeof(Node));
       n->data = x;
       n->next = head;

       return n;
    }
    
    
    Node *insertAtEnd(Node *head, int x)  
    {
        Node *n = (Node*)calloc(1, sizeof(Node));
        n->data = x;
        n->next = NULL;
        if(head == NULL)
            return n;
            
        Node* iter = head;
        while(iter->next != NULL)
            iter = iter->next;
    
        iter->next = n;
        
        return head;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 


// } Driver Code Ends