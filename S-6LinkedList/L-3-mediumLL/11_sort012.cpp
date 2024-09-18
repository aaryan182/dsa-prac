// https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

class Solution {
  public:
    Node* segregate(Node* head) {
        if(head == nullptr || head->next == nullptr) return head;
        
        int count[3] = {0,0,0};
        Node* temp = head;
        
        while(temp != nullptr){
            count[temp-> data]++;
            temp = temp->next;
        }
        
        temp = head;
        int i = 0;
        while(temp != nullptr){
            if(count[i] == 0){
                i++;
            }
            else{
                temp->data = i;
                count[i]--;
                temp = temp->next;
            }
        }
        return head;
    }
};