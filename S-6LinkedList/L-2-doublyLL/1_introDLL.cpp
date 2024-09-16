// https://www.geeksforgeeks.org/problems/introduction-to-doubly-linked-list/1

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        if(arr.empty()) return nullptr;
        
        Node* head = new Node(arr[0]);
        Node* current = head;
        
        for(int i = 1; i<arr.size(); i++){
            Node* newNode = new Node(arr[i]);
            current->next = newNode;
            newNode->prev = current;
            
            current = newNode;
        }
        return head;
    }
};