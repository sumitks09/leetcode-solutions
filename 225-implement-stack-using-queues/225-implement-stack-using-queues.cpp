class MyStack {
public:
        queue<int>s;
    MyStack() {
        
    }
    
    void push(int x) {
        s.push(x);
            for(int i=0; i<s.size()-1; i++){
            s.push(s.front());
            s.pop();
    }
    }
    
    int pop() {
        int r=s.front();
            s.pop();
            return r;
    }
    
    int top() {
        return s.front();
    }
    
    bool empty() {
         return s.empty();
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