```
ListNode* reverseBetween(ListNode* head, int left, int right) {
if(left!=1) // not first element
{
head->next=reverseBetween(head->next, left-1, right-1); // passing next element
return head;
}
else{ // left is first element
ListNode *prev=NULL, *curr=head, *next=NULL;
while(right>0){   //reversing the list till right position
next = curr->next;
curr->next = prev;
prev = curr;
curr = next;
right--;
}
head->next=curr; // connecting first element to right+1 position
return prev;    // new start
}
}
```