// https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

class Solution {
  public:
    Node* reverse(Node* head){
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        
        while(current != nullptr){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        head = reverse(head);
        
        Node* temp = head;
        int carry = 1;
        
        while(temp != nullptr){
            int sum = temp->data + carry;
            temp->data = sum % 10;
            carry = sum/10;
            
            if(carry == 0) break;
            
            if(temp->next == nullptr && carry > 0){
                temp->next = new Node(carry);
                carry = 0;
            }
            temp = temp->next;
        }
        return reverse(head);
    }
};