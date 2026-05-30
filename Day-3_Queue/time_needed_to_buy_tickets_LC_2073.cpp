#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public :
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size() ;
        int time = 0 ;
        queue<int> q ;
        for (int i=0; i<n; i++) {
            q.push(i) ;
        }
        while (!q.empty()) {
            int person = q.front() ;
            q.pop() ;
            tickets[person]-- ;
            time++ ;
            if (person == k && tickets[person] == 0) return time ;
            if (tickets[person] > 0) {
                q.push(person)  ;
            }
        } return time ;
    }
} ;

int main() {
    vector<int> tickets = {2, 3, 2} ;
    int k = 2 ;
    Solution obj ;
    cout << "Total " << obj.timeRequiredToBuy(tickets, k) << " seconds...";
    return 0 ;
}