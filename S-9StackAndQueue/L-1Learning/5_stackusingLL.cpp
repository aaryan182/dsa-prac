// https://www.geeksforgeeks.org/problems/implement-stack-using-linked-list/1

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        StackNode* newNode = new StackNode(x);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if(top == NULL) return -1;
        
        int poppedValue = top->data;
        StackNode* temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    MyStack() { top = NULL; }
};