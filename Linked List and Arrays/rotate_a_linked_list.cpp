class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head -> next) return head;
        ListNode* temp = head;
        
        int size = 1;
        while(temp -> next){
            size++;
            temp = temp -> next;
        }
       
        temp -> next = head;
        
        k = k % size;
        int tern = size - k;
        while(tern--){
            temp = temp -> next;
        }
        head = temp -> next;
        temp -> next = NULL;
        return head;
    }
};
