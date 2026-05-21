#include <iostream>
#include <stack>
using namespace std;

string clearDigits(string s) {
    stack<char> st;

    for (char ch : s) {

        if (isdigit(ch)) {
            if (!st.empty()) st.pop();
        }

        else {
            st.push(ch);
        }
    }

    string ans = "";

    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }

    return ans;
}

int main() {
    string s = "abc3d2";

    cout << clearDigits(s);

    return 0;
}