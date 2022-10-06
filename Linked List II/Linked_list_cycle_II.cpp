class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head -> next) return NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *pos = head;
        
        while(fast-> next and fast -> next -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                while(slow != pos){
                    slow = slow -> next;
                    pos = pos -> next;
                }
                return slow;
            }
        }
        return NULL;
    }
};