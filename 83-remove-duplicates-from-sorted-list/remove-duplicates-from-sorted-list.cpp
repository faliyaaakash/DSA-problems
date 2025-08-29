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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *tp=head;
        while(tp!=NULL && tp->next!=NULL){
            if(tp->val==tp->next->val){
                tp->next=tp->next->next;
            }else{
                tp=tp->next;
            }
        }
        return head;
    }
};