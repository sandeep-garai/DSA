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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ptr = head;
        if(head==NULL)
            return NULL;
        while(ptr->next!=NULL){
            if(ptr->next->val==val){
                ptr->next=ptr->next->next;
            }
            else{
                ptr=ptr->next;
            }
        }
        if(head->val==val)
            head=head->next;
        return head;
    }
};