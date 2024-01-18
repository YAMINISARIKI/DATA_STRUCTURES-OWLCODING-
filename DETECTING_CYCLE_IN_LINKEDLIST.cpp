#include <bits/stdc++.h>
using namespace std;
class ListNode {
public:
    int value;
    ListNode* next;

    ListNode(int val) : value(val), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
    if (!head || !head->next) {
        return false;
    }

    ListNode* tortoise = head;
    ListNode* hare = head;

    while (hare && hare->next) {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare) {
            return true;
        }
    }

    return false;
}

// Example usage:
int main() {
    // Creating a linked list with a cycle
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node2; // creating a cycle

    // Checking for a cycle
    bool result = hasCycle(node1);
    if (result) {
        std::cout << "The linked list has a cycle." << std::endl;
    } else {
        std::cout << "The linked list does not have a cycle." << std::endl;
    }

    // // Remember to free the allocated memory
    // delete node1;
    // delete node2;
    // delete node3;
    // delete node4;
    // delete node5;

    // return 0;
}
