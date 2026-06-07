class MyQueue {
    stack<int> first,second;
public:
    MyQueue() {
    }
    
    void push(int x) {
        first.push(x);
    }
    
    int pop() {
        while(first.size()>1){
            second.push(first.top());
            first.pop();
        }
        int n=first.top();
        first.pop();
        while(!second.empty()){
            first.push(second.top());
            second.pop();
        }
        return n;
    }
    
    int peek() {
         while(first.size()>1){
            second.push(first.top());
            first.pop();
        }
        int n=first.top();
        while(!second.empty()){
            first.push(second.top());
            second.pop();
        }
        return n;
    }
    
    bool empty() {
        if(first.empty() && second.empty()){
            return true;
        }
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