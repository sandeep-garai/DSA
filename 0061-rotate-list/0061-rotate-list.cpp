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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr)    return head;
        ListNode* ptr = head;
        int cnt = 1;
        while(ptr->next!=nullptr){
            cnt++;
            ptr=ptr->next;
        }
        //cout<<cnt;
        int rot = k % cnt;
        if(!rot)    return head;
        ListNode* temp = head;
        ptr->next = head;
        while(--cnt>rot){
            temp=temp->next;
            
        }
        head=temp->next;
        temp->next=nullptr;
        return head;
    }
};