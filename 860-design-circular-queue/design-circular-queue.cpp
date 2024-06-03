class MyCircularQueue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }

    bool enQueue(int value) {
        if ((front == 0 && rear == size-1) || (rear == (front-1) % size))
            return false;
        else if (front == -1) {
            rear = front = 0;
            arr[rear] = value;
            return true;
        } else if (front != 0 && rear == size - 1) {
            rear = 0;
            arr[rear] = value;
            return true;
        } else {
            rear++;
              arr[rear] = value;
            return true;
        }
    }

    bool deQueue() {
        if (front == -1)
            return false;
        else if (front == rear) {
            front = rear = -1;
            return true;
        } else if (front == size - 1) {
            front = 0;
            return true;
        } else {
            front++;
            return true;
        }
    }

    int Front() {
        if (front == -1)
            return -1;
        else {
            return arr[front];
        }
    }

    int Rear() {
        if( front == -1 &&  rear == -1)
            return -1;
        else {
            return arr[rear];
        }
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    bool isFull() {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % size))
            return true;
        else
            return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */