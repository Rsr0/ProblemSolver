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
    struct comp{
        bool operator()(const ListNode* l1, const ListNode* l2){
            return l1->val > l2->val;
        }
     };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        
        priority_queue<ListNode*, vector<ListNode*>, comp> pq;
        
        // first element of every linked list
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL)
                 pq.push(lists[i]);
        }
        
        // remove the minimum element and add the next element of that list

        while(!pq.empty()){
           temp->next=pq.top();
            pq.pop();
            
            temp=temp->next;
            
            if(temp->next)
                pq.push(temp->next);
        }
        
        return head->next;
    }
};