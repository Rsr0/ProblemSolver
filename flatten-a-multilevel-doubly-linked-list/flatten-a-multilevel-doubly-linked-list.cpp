/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr=head;
        while(curr!=NULL){
            if(curr->child){
                Node* nxt=curr->next; // stores next node
                curr->next=curr->child;  // make child as next
                curr->next->prev=curr;   // updating prev node of next
                curr->child=NULL;       // no child node
                Node* ptr=curr->next;
                while(ptr->next) ptr=ptr->next;  // traversing child nodes   
                ptr->next=nxt;    // joining next and end of child node
                if(nxt)          
                    nxt->prev=ptr;   // updating prev ptr of next
                
            }
            curr=curr->next;
        }
        return head;
    }
};