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
    ListNode* root;
    Solution(ListNode* head) {
        root=head;
    }
    
    int getRandom() {
        ListNode* curr=root;
        int ans=0;
        int i=1;
        while(curr){
            if(rand()%i==0)
                ans=curr->val;
            i++;
            curr=curr->next;
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */