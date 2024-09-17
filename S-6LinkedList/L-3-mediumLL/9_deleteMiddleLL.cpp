//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return nullptr;

        ListNode* temp = head;
        int length = 0;
        while(temp != nullptr){
            length++;
            temp = temp->next;
        }

        int middle = length/2;

        ListNode* prev = nullptr;
        temp = head;
        for(int i = 0; i< middle ; i++){
            prev = temp;
            temp = temp->next;
        }
        if(prev != nullptr) prev->next = temp->next;

        delete temp;
        return head;
    }
};