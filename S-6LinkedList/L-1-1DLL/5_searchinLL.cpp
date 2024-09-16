// https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1

class Solution {
  public:
    bool searchKey(int n, struct Node* head, int key) {
        while(head != nullptr){
            if(head->data == key) return true;
            head= head->next;
        }
        return false;
    }
};