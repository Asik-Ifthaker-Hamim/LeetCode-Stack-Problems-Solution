class MinStack {
public:
stack<int>st;
stack<int>s_min;
    MinStack() {
        int x;
    }

    void push(int val) {
        st.push(val);
        if(s_min.empty() || val<=s_min.top())
        {
            s_min.push(val);
        }
    }

    void pop() {
        if(st.top()==s_min.top())
        {
            s_min.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return s_min.top();
    }
};
