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
        ListNode* dummyNode = new ListNode(-1,head);
        ListNode* prev = dummyNode;
        ListNode* ptr = head;
        while(ptr!=nullptr){
            if(ptr->next!=nullptr && ptr->val == ptr->next->val){
                while(ptr->next!=nullptr && ptr->val == ptr->next->val){
                    ptr=ptr->next;
                }
                prev->next = ptr->next;
            }
            else{
                prev = ptr;
            }
            ptr = ptr ->next;
        }
        return dummyNode->next;
    }
};