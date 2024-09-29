// https://www.geeksforgeeks.org/problems/implement-stack-using-array/1

void MyStack ::push(int x) {
    if(top>= 999){
        cout<<"stack overflow";
        return;
    }
    arr[++top] = x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    if(top == -1) return -1;
    return arr[top--];
}