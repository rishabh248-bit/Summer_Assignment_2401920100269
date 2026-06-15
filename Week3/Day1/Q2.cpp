class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr!=NULL){
            ListNode* nextN = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextN;
        }
        return prev;
    }
};
