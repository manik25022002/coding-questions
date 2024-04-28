class MyQueue {
    stack<int> st_1;
    stack<int> st_2;
    int size;

public:
    MyQueue() { size = 1000; }

    void push(int x) {

        while (!st_1.empty()) {
            int e = st_1.top();
            st_1.pop();
            st_2.push(e);
        }
        st_1.push(x);
        while (!st_2.empty()) {
            int y = st_2.top();
            st_2.pop();
            st_1.push(y);
        }
    }

    int pop() {

        if (st_1.empty()){
            return -1;}
        else {
            int sol = st_1.top();
            st_1.pop();
            return sol;
        }
    }

        int peek(){
            if (st_1.empty())
                return -1;
            else
                return st_1.top();
        }

        bool empty() {
            if (st_1.empty())
                return true;
            else
                return false;
        }
    
    };

    /**
     * Your MyQueue object will be instantiated and called as such:
     * MyQueue* obj = new MyQueue();
     * obj->push(x);
     * int param_2 = obj->pop();
     * int param_3 = obj->peek();
     * bool param_4 = obj->empty();
     */