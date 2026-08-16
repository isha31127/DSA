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
    void addValue(ListNode* &head, int value){
        ListNode* newNode = new ListNode(value);
        if(head == nullptr){
            head = newNode;
            return;
        }
        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode* ans = nullptr;
        ListNode* temp = head;
        while(temp != nullptr){
            if(temp->val < x){
                addValue(ans,temp->val);
            }
            temp = temp->next;
        }
        ListNode* temp1 = head;
        while(temp1 != nullptr){
            if(temp1->val >= x){
                addValue(ans,temp1->val);
            }
            temp1 = temp1->next;
        }
        return ans;
    }
};