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
        vector<int> v;
        ListNode* curr=head;
        
        while(curr){
            v.push_back(curr->val);
            curr=curr->next;
        }
        
        int n=v.size();
        int p=0, q=0;
        for(int i=0;i<n;i++){
            if(i==k-1)
                p=i;
            if(i==n-k)
                q=i;
        }
        
        if(p==q) return head;
        swap(v[p],v[q]);
        
        curr=head;
        int i=0;
        while(curr){
            if(i==p)
                curr->val=v[p];
            if(i==q)
                curr->val=v[q];
            i++;
            curr=curr->next;
        }
        return head;
    }
};