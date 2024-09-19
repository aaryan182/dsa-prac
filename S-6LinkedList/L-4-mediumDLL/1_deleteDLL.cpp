// https://www.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        if (*head_ref == nullptr) return;

        Node* current = *head_ref;

        while (current != nullptr) {
            Node* next_node = current->next;

            if (current->data == x) {
                if (current == *head_ref) {
                    *head_ref = current->next; 
                    if (*head_ref != nullptr) {
                        (*head_ref)->prev = nullptr;  
                    }
                }
                else {
                    if (current->prev != nullptr) {
                        current->prev->next = current->next;
                    }
                    if (current->next != nullptr) {
                        current->next->prev = current->prev;
                    }
                }
                delete current;
            }
            current = next_node;
        }
    }
};