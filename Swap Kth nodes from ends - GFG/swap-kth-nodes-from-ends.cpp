// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    if(!head || K>num)   return head;

    int k1=K, k2=num-K+1;
    if(k1==k2)  return head;
    if(k1>k2)   swap(k1,k2);
    
 
    Node* prev1=NULL, *p=head;
    Node* prev2=NULL, *q=head;
    for(int i=1;i<k1;i++){
        prev1=p;
        p=p->next;
    }
    for(int i=1;i<k2;i++){
        prev2=q;
        q=q->next;
    }
    
    Node* temp=q->next;
    if(prev1)   prev1->next=q;
    if(prev2)   prev2->next=p;
    q->next=p->next;
    p->next=temp;
    if(p==head) head=q;
    
    return head;

    
}
