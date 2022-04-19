// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code
       Node* lt = new Node(-1);
        Node* eq = new Node(-1);
        Node* gt = new Node(-1);
        Node* l = lt;
        Node* e = eq;
        Node* g = gt;
        Node* np;

        while(head){
            np = head;

            if(head->data < x){
                
                lt->next = np;
                lt = lt->next;
                
            }
            else if(head->data == x){
                
                eq->next = np;
                eq = eq->next;
            }
            else{
                gt->next = np;
                gt = gt->next;
            }
            head = head->next;
            np->next = NULL;
        }
        if(e->next) {
            lt->next = e->next;
            eq->next = g->next;
        }
        else{
            lt->next = g->next;
        }
        return l->next;
}