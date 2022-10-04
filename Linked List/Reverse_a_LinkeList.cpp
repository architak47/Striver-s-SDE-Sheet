class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        ListNode* next;
        
        while(temp){
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
            
        } 
        
        return prev;
    }
};