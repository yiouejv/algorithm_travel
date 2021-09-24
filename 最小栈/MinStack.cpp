#include<stack>


class MinStack {
private:
    stack<int> stackA, stackB;
public:
    MinStack() {}
    ~MinStack() {}

    void push(int n) {
        stackA.push(n);
        if (stackB.empty() || n <= stackB.top()) {
            stackB.push(n);
        }
    }

    void pop() {
        if (stackA.top() == stackB.top()) {
            stackB.pop();
        }
        stackA.pop();
    }

    int top() {
        return stackA.top();
    }

    int GetMin() {
        return stackB.top();
    }
};