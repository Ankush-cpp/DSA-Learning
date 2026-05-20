#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

string simplifyPath(string path) {
    vector<string> st;
    string temp;

    stringstream ss(path);

    while (getline(ss, temp, '/')) {

        if (temp == "" || temp == ".") {
            continue;
        }

        else if (temp == "..") {
            if (!st.empty()) {
                st.pop_back();
            }
        }

        else {
            st.push_back(temp);
        }
    }

    string ans = "";

    for (string dir : st) {
        ans += "/" + dir;
    }

    return ans.empty() ? "/" : ans;
}

int main() {
    string path = "/home//foo/";

    cout << simplifyPath(path);

    return 0;
}