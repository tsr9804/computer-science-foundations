//Stack Class

#define MAX 1000

class Stack {

public:
    int top;
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }

    bool push(int x) {
        if(top > MAX) {
            return false;
        } else {
            top++;
            a[top] = x;
            return true;
        }
    }

    int pop() {
        if(top == -1) {
            return 0;
        } else {
            int retVal = a[top];
            top--;
            return retVal;
        }
    }

    int peek() {
        if(top == -1) {
            return 0;
        } else {
            return a[top];
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};



