ListNode* reverse(ListNode* head){
    ListNode* prev = NULL;
    ListNode* temp = head;
    ListNode* next;
    
    while(temp){
        next = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = next;
    }
    head = prev;
    return head;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head -> next) return true;        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next!=NULL&&fast->next->next!=NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode *rev = reverse(slow -> next);
        ListNode *dummy = head;
        
        while(rev and dummy){
            if(rev -> val != dummy -> val) return false;
            rev = rev -> next;
            dummy = dummy -> next;
        }
        return true;
    }
};