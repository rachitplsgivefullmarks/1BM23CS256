struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev=NULL;
    struct ListNode* curr=head;
    while(curr!=NULL){
        struct ListNode* cn=curr->next;
        curr->next=prev;
        prev=curr;
        curr=cn;
    }
    return prev;
}
bool isPalindrome(struct ListNode* head) {
        struct ListNode* slow=head;
        struct ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverseList(slow);
        fast=head;
        while(slow!=NULL){
            if(slow->val!=fast->val){
                return false;
            }
            slow=slow->next;
            fast=fast->next;
        }
        return true;

