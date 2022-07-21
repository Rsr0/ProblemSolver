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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left!=1){
            head->next=reverseBetween(head->next, left-1, right-1);
            return head;
        }
        else{
            ListNode* prev=NULL, *curr=head, *next=NULL;
            while(right>0){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                right--;
            }
            head->next=curr;
            return prev;
        }
    }
};