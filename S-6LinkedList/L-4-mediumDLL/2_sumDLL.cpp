// https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int,int>> result ;
        
        if(head == nullptr || head->next == nullptr) return result;
        
        Node* start = head;
        Node* end = head;
        
        while(end->next != nullptr){
            end = end->next;
        }
        
        while(start != end && start->prev != end){
             int sum = start->data + end->data;

            if (sum == target) {
                result.push_back({start->data, end->data});
                start = start->next;
                end = end->prev;
            }

            else if (sum < target) {
                start = start->next;
            }

            else {
                end = end->prev;
            }
        }
         return result;
    }
};