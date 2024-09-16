// https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

class Solution {
  public:
    DLLNode* reverseDLL(DLLNode* head) {
        if(head == nullptr) return nullptr;
        
        DLLNode* current = head;
        DLLNode* prevNode = nullptr;
        
        while(current != nullptr){
            prevNode = current->prev;
            current->prev = current->next;
            current->next = prevNode;
            
            current = current->prev;
        }
        if(prevNode != nullptr) head = prevNode->prev;
        
        return head;
    }
};