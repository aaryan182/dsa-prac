// https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(head == nullptr) return nullptr;
        
        Node* current = head;
        
        if(x==1){
            head = head->next;
            if(head != nullptr) head->prev = nullptr;
            
            delete current;
            return head;
        }
        
        for(int i = 1; i<x && current != nullptr; i++){
            current = current->next;
        }
        
        if(current != nullptr){
            if(current->next != nullptr) current->next->prev = current->prev;
            
            if(current->prev != nullptr) current->prev->next = current->next;
            
            delete current;
        }
        return head;
    }
};