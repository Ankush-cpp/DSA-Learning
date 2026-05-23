#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> input, output;

    void push(int x) {
        input.push(x);
    }

    int pop() {
        peek();
        int val = output.top();
        output.pop();
        return val;
    }

    int peek() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};

int main() {
    MyQueue q;

    q.push(1);
    q.push(2);

    cout << q.peek() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;

    return 0;
}