class MinStack {
public:
   multiset<int>ms;
 stack<int>st;
MinStack() {
    while(!st.empty())
        st.pop();
    ms.clear();
}

void push(int val) {
    ms.insert(val);
    st.push(val);
}

void pop() {
    auto it = ms.find(st.top());
    ms.erase(it);
    st.pop();
    
}

int top() {
    return st.top();
}

int getMin() {
    return *min_element(ms.begin(),ms.end());
}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */