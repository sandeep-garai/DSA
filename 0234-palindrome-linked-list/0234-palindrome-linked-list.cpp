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
        vector<int>st;
        ListNode* ptr=head;
        while(ptr!=NULL){
            st.push_back(ptr->val);
            ptr=ptr->next;
        }
        delete(ptr);
        int n = st.size();
        for(int i=0;i<n/2;i++){
            if(st[i]!=st[n-i-1])  return false;
        }
        return true;    
    }
};