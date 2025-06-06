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
    ListNode* revert(ListNode* head){
        if(head==nullptr || head->next==nullptr)  return head;
        ListNode* newHead = revert(head->next);
        ListNode* front = head ->next;
        front->next = head;
        head->next = nullptr;
        return newHead;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* newHead = revert(head);
        ListNode* ptr = newHead;
        int cnt =0,ans=0;
        while(ptr){
            if(ptr->val)
                ans = ans + pow(2,cnt);
            
            ++cnt;
            ptr=ptr->next;
        }
        return ans;
    }
};