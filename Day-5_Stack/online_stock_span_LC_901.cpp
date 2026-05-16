#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class StockSpanner {
public:
    vector<int> prices;
    stack<int> st;

    int next(int price) {
        prices.push_back(price);

        int idx = prices.size() - 1;

        // Pop smaller or equal prices
        while (!st.empty() && prices[st.top()] <= price) {
            st.pop();
        }

        int span;

        // If no previous greater element
        if (st.empty()) {
            span = idx + 1;
        } else {
            span = idx - st.top();
        }

        st.push(idx);

        return span;
    }
};

int main() {
    StockSpanner obj;

    cout << obj.next(100) << endl;
    cout << obj.next(80) << endl;
    cout << obj.next(60) << endl;
    cout << obj.next(70) << endl;
    cout << obj.next(60) << endl;
    cout << obj.next(75) << endl;
    cout << obj.next(85) << endl;

    return 0;
}