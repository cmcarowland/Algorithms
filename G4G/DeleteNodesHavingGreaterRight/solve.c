//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node* newHead = NULL;
        Node* endOfNew = NULL;
        
        Node* compare = NULL;
        Node* current = head;
        
        while(current->next != NULL)
        {
            compare = current->next;
            while(compare != NULL)
            {
                //cout << "Current " << current->data
                //<< " Compare " << compare->data << endl;
                if(current->data < compare->data)
                {
                    break;
                }
                else
                {
                    if(compare->next == NULL)
                    {
                        if(newHead == NULL)
                        {
                            newHead = new Node(current->data);
                            endOfNew = newHead;
                        }
                        else
                        {
                            endOfNew->next = new Node(current->data);
                            endOfNew = endOfNew->next;
                        }
                    }
                }
                
                compare = compare->next;
            }
            
            current = current->next;
        }
    
        if(newHead != NULL)
            endOfNew->next = new Node(current->data);
        else
            newHead = new Node(current->data);
            
        return newHead;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends