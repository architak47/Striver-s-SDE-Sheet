class Solution {
public:
    Node *copyRandomList(Node *head) {
        Node *l1, *l2, *newhead;
        if(!head) return nullptr;
        l1 = head;
        while(l1){
            l2 = new Node(l1 -> val);
            l2 -> next = l1 -> next;
            l1 -> next = l2;
            l1 = l1 -> next -> next;
        }
        newhead = head -> next;
        
        l1 = head;
        while(l1){
            if(l1 -> random != nullptr) l1 -> next -> random = l1 -> random -> next;
            l1 = l1 -> next -> next;
        }
        
        l1 = head;
        while(l1){
            l2 = l1 -> next;
            l1 -> next = l2 -> next;
            if(l2 -> next != nullptr) l2 -> next = l2 -> next -> next;
            l1 = l1 -> next;
        }
        return newhead;
    }
};