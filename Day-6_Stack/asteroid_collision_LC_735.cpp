#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> st;

    for (int a : asteroids) {

        while (!st.empty() && st.top() > 0 && a < 0) {

            if (abs(st.top()) < abs(a)) {
                st.pop();
                continue;
            }

            else if (abs(st.top()) == abs(a)) {
                st.pop();
            }

            a = 0;
            break;
        }

        if (a != 0) {
            st.push(a);
        }
    }

    vector<int> ans(st.size());

    for (int i = st.size() - 1; i >= 0; i--) {
        ans[i] = st.top();
        st.pop();
    }

    return ans;
}

int main() {
    vector<int> asteroids = {5, 10, -5};

    vector<int> res = asteroidCollision(asteroids);

    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}