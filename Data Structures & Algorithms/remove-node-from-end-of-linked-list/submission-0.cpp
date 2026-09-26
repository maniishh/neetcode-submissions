/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // size is m,1 2 3 4
        // from end is will 3   , from start  iit is 3rd node  (m-n+1)th node from start
        int m = 0;
        ListNode* temp = head;
        while (temp) {
            temp = temp->next;
            m++;
        }
        // the size of ll is m
        // m-n+1th node from the start
        temp = head;
        int x = m - n;
        if (m == n) return head->next;
        for (int i = 1; i < x; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
