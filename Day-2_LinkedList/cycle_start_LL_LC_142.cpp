#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            ListNode* start = head;

            while (start != slow) {
                start = start->next;
                slow = slow->next;
            }
            return start;
        }
    }
    return NULL;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Create cycle (4 -> 2)
    head->next->next->next->next = head->next;

    ListNode* start = detectCycle(head);

    if (start)
        cout << "Cycle starts at: " << start->val << endl;
    else
        cout << "No Cycle\n";

    return 0;
}