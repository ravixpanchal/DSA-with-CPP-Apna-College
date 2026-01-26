class Solution {
public:
ListNode* splitAtMid(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    ListNode* prev=NULL;
    
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }

    if(prev!=NULL){
        prev->next=NULL;
    }
    return slow;
}

ListNode* reverse(ListNode* head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

    void reorderList(ListNode* head) {
        ListNode* rightHead=splitAtMid(head);
        ListNode* rightHeadRev=reverse(rightHead);

        //split alternate
        ListNode* left=head;
        ListNode* right=rightHeadRev;
        ListNode* tail=right;

        while(left!=NULL && right!=NULL){
            ListNode* nextLeft=left->next;
            ListNode* nextRight=right->next;

            left->next=right;
            right->next=nextLeft;
            tail=right;

            //updation
            left=nextLeft;
            right=nextRight;
        }

        if(tail!=NULL){
            tail->next=right;
        }
    }
};