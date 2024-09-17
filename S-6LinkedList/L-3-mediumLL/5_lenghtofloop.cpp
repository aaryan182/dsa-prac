// https://www.geeksforgeeks.org/problems/find-length-of-loop/1

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        if(head == nullptr || head->next == nullptr) return 0;
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) return countLoopLength(slow);
        }
        return 0;
    }
    
    private: 
        int countLoopLength(Node* loopNode){
            int count = 1;
            Node* temp = loopNode;
            
            while(temp->next != loopNode){
                count++;
                temp = temp->next;
            }
            return count;
        }
};