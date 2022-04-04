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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head, *last=NULL, *temp;
        while(curr){
            if(last!=NULL)  // n-k
                last=last->next;
            else if(--k==0){  // k
                temp=curr;
                last=head;
            }
            curr=curr->next;
        }
        swap(temp->val, last->val);
        return head;
    }
};