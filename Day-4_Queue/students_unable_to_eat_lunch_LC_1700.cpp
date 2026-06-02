#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {

    queue<int> q;

    for (int student : students) {
        q.push(student);
    }

    int index = 0;
    int rotations = 0;

    while (!q.empty() && rotations < q.size()) {

        if (q.front() == sandwiches[index]) {
            q.pop();
            index++;
            rotations = 0;
        }
        else {
            q.push(q.front());
            q.pop();
            rotations++;
        }
    }

    return q.size();
}

int main() {

    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};

    cout << countStudents(students, sandwiches);

    return 0;
}