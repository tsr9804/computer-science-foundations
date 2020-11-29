//Queue Class

#define MAX 1000

class Queue {

public:
    int rear_value;
    int a[MAX]; // Maximum size of Queue

    Queue() { rear_value = -1; }

    bool enqueue(int x){
        if(rear_value >= MAX-1) {
            return false;
        } else {
            rear_value++;
            a[rear_value] = x;
            return true;
        }
    }

    int dequeue(){
        if(rear_value == -1) {
            return 0;
        } else {
            int deqVal = a[0];
            shiftLeft();
            rear_value--;
            return deqVal;
        }
    }

    int front(){
        if(rear_value == -1) {
            return 0;
        } else {
            return a[0];
        }
    }

    int rear(){
        if(rear_value == 0) {
            return 0;
        } else {
            return a[rear_value];
        }
    }

    void shiftLeft(){
        for(int i = 1; i <= rear_value; i++) {
            a[i-1] = a[i];
        }
    }
};




