// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
     Node* reverse(Node* head)
   {
       Node* prev=NULL;
       Node* curr=head;
       Node* nex=NULL;
       while(curr!=NULL)
       {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
       }
       return prev;
   }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* dummy = new Node(0);
		Node* ans = dummy;
        first = reverse(first);
        second = reverse(second);
        int carry=0;
        while(first!=NULL || second!=NULL || carry!=0){
            int newval=0;int sum=0;
            if(first!=NULL){
                newval+=first->data;
                first=first->next;
            }
            if(second!=NULL){
                newval+=second->data;
                second=second->next;
            }
            newval+=carry;
            sum=newval%10;
            carry=newval/10;
            Node* newnode = new Node(sum);
			ans->next = newnode;
			ans = ans->next;
            
        }
        Node* temp = dummy;
		dummy = dummy->next;
		delete(temp);
		
		return reverse(dummy);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends