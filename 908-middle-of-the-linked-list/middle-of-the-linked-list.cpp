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
    ListNode* middleNode(ListNode* head) {
        if(!head) return head;
        if(head->next == nullptr)return head;
        int c = 0;
        int mid = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            c++;
            temp=temp->next;
        }
        if(mid % 2 == 0){
        mid = (c/2)+1;
        }
        else{
            mid = c/2;
        }
        ListNode* temp1 = head;
        for(int i = 1; i < mid; i++){
            head = temp1->next;
            temp1 = temp1->next; 
        }
        return head;
    }
};