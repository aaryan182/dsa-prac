// https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1

void addNode(Node *head, int pos, int data)
{
    Node* newNode = new Node(data);
    Node* current = head ;
    for(int i = 0; i< pos && current != nullptr ; ++i){
        current = current->next;
    }
    
    if(current != nullptr){
        newNode->next = current->next;
        newNode->prev = current;
        
        if(current->next != nullptr) current->next->prev = newNode;
        current->next = newNode;
    }
}