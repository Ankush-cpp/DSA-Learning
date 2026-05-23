#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;

    void push(int x) {
        q.push(x);

        int sz = q.size();

        while (sz > 1) {
            q.push(q.front());
            q.pop();
            sz--;
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack st;

    st.push(1);
    st.push(2);

    cout << st.top() << endl;
    cout << st.pop() << endl;
    cout << st.empty() << endl;

    return 0;
}