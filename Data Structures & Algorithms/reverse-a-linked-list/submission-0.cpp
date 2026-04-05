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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* prev=head;
        ListNode* nxt=head->next;
        while(nxt){
            ListNode* dumm=nxt->next;
            nxt->next=prev;
            prev=nxt;
            nxt=dumm;
        }
        head->next=nullptr;
        return prev;
    }
};
