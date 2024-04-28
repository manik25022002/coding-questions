class MyStack {
    queue<int> q;
    int front;
    int rear;

public:
    MyStack() {
        front = -1;
        rear = -1;
    }

    void push(int x) {
        int s = q.size();
        q.push(x);
        for (int i = 0; i < s; i++) {
            int e = q.front();
            q.pop();
            q.push(e);
        }
    }

    int pop() {
        if (q.front() == -1)
            return -1;
        else {
            int ans = q.front();
            q.pop();
            return ans;
        }
    }

    int top() {
        if (q.front() == -1)
            return -1;
        else {
            return q.front();
        }
    }

    bool empty() {
        if (q.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */