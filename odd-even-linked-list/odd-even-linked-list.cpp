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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        
        auto ehead=head->next;
        auto odd=head;
        auto even=ehead;
        auto node=even;
        
        if(!even) return head;
        while(node){
            node=node->next;
            if(node){
                odd->next=node;
                odd=odd->next;
                
                node=node->next;
                if(node){
                    even->next=node;
                    even=even->next;
                }
            }
            
        }
        odd->next=ehead;
        even->next=NULL;
        
        return head;
    }
};