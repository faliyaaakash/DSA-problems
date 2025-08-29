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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (!list1) return list2;
    if (!list2) return list1;

    ListNode *pretp1 = list1;
    ListNode *tp1 = list1;
    ListNode *tp2 = list2;
    ListNode *nexttp2 = list2->next;

    while (tp1 != NULL && tp2 != NULL) {
        if (tp1->val > tp2->val) {
            tp2->next = tp1;
            if (tp1 == list1) {
                list1 = tp2; // update head
            } else {
                pretp1->next = tp2;
            }
            pretp1 = tp2;

            tp2 = nexttp2;
            if (tp2) nexttp2 = tp2->next;
        } else {
            pretp1 = tp1;
            tp1 = tp1->next;
        }
    }

    if (tp2) { // attach remaining part of list2
        pretp1->next = tp2;
    }

    return list1;
}

};