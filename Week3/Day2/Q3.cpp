class Solution {
public:
    ListNode* reverseLLRec(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseLLRec(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverseLLRec(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;
        while(second!=NULL){
            if(first->val!=second->val) return false;
            first = first->next;
            second = second->next;
        }
        slow->next = reverseLLRec(newHead);
        return true;
    }
};
