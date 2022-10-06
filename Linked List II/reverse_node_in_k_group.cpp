class Solution {
    int length(ListNode* head){
        int count = 0;
        while(head){
            count++;
            head = head -> next;
        }
        return count;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head or !head -> next) return head;
        int len = length(head);
        
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* prev = dummy;
        
        ListNode* temp;
        ListNode* next;
        
        while(len >= k){
            temp = prev -> next;
            next = temp -> next; 
            for(int i=1;i<k;i++){
                temp -> next = next -> next;
                next -> next = prev -> next;
                prev -> next = next;
                next = temp -> next;
            }
            prev = temp;
            len -= k;
        }    
        return dummy -> next;
    }
};