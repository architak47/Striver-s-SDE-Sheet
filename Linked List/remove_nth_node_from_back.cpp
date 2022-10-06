class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return NULL;        
        ListNode* temp = new ListNode();
        temp -> next = head;
        
        ListNode* slow = temp;
        ListNode* fast = temp;
        
        while(n>0 ){
            fast = fast -> next;
            n--;
        }
        
        while(fast->next){
            fast = fast -> next;
            slow = slow -> next;
        }
        
        slow -> next = slow->next->next;
        
        return temp -> next;
    }
};