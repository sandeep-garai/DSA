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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)    return head;
        stack<int>st;
        ListNode* ptr=head;
        while(ptr!=NULL){
            st.push(ptr->val);
            ptr=ptr->next;
        }
        ptr = head;
        while(ptr!=nullptr){
            if(ptr->val!=st.top()) return false;
            st.pop();
            ptr=ptr->next;
        }
        return true;    
    }
};