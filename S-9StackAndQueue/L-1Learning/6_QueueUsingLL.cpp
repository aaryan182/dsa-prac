// https://www.geeksforgeeks.org/problems/implement-queue-using-linked-list/1

void MyQueue:: push(int x)
{
    QueueNode* newNode = new QueueNode(x);
    
    if(rear == NULL){
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
      if(front == NULL) return -1;
      
      int poppedValue = front->data;
      QueueNode* temp = front;
      front = front->next;
      
      if(front == NULL) rear = NULL;
      
      delete temp;
      return poppedValue;
}