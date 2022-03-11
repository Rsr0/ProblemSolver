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
    
    // 2 Pass
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)   return head;
        
        ListNode* cur=head;
        int len=1;
        while(cur->next){
            len++;
            cur=cur->next;
        }
        
        cur->next=head; // circular LL
        k=k%len;
        for(int i=0;i<len-k;i++)
            cur=cur->next;
        
        head=cur->next;
        cur->next=NULL;
        return head;
        
    }
};