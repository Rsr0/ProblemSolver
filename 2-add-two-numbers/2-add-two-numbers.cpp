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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy=new ListNode(0);
        ListNode *ptr=dummy;
        int c=0;
        while(l1 && l2){
            ptr->next=new ListNode();
            ptr=ptr->next;
            ptr->val=(l1->val + l2->val + c)%10;
            c=(l1->val + l2->val + c)/10;
            l1=l1->next;
            l2=l2->next;
        }
        
         while(l1){
            ptr->next=new ListNode();
            ptr=ptr->next;
            ptr->val=(l1->val + c)%10;
            c=(l1->val + c)/10;
            l1=l1->next;
        }
        
         while(l2){
            ptr->next=new ListNode();
            ptr=ptr->next;
            ptr->val=(l2->val + c)%10;
            c=(l2->val + c)/10;
            l2=l2->next;
        }
        
        if(c){
            ptr->next=new ListNode();
            ptr=ptr->next;
            ptr->val=c;
        }
        
        ptr->next=NULL;
        return dummy->next;
        
    }
};