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
    ListNode* partition(ListNode* head, int x) {
        queue<ListNode*> q;
        ListNode* prev=new ListNode(0), *dummy=prev;
        while(head){
            if(head->val<x){
                prev->next=head;
                prev=head;
            }
            else
                q.push(head);
            head=head->next;
        }
        
        while(!q.empty()){
            prev->next=q.front();
            prev=prev->next;
            q.pop();
        }
        prev->next=NULL;
        return dummy->next;
    }
};