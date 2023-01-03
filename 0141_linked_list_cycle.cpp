// LeetCode 141. Linked List Cycle

#include <iostream>
#include "listnode.h"

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) return true;
        }

        return false;
    }
};

int main() {
    Solution sol;
    
    std::cout << "Hello world!" << std::endl;

    return 0;
}