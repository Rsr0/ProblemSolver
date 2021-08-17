/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        
        int pval=head->val;
        ListNode* tmp=head;
        ListNode* nxt=head->next;
        
        while(nxt!=NULL){
            if(pval==nxt->val)
                nxt=nxt->next;
            else{
                tmp->next=nxt; //update ptr
                tmp=nxt;  // update the node
                pval=tmp->val;  // update val
                nxt=nxt->next;
            }
        }
        //when last nodes are same i.e. 2->3->3->null results in 2->3->null
        tmp->next=nxt; 
        return head;
    }
};