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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next || !head->next->next) return {-1,-1};
        vector<int> arr;
        ListNode* temp = head;
        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        vector<int> criticalPoints;
        for(int i = 1;i < n-1; i++){
            if(arr[i] < arr[i-1] && arr[i] < arr[i+1])criticalPoints.push_back(i);
            else if(arr[i] > arr[i-1] && arr[i] > arr[i+1])criticalPoints.push_back(i);
        }
        int s = criticalPoints.size();
        if(s < 2) return {-1,-1};
        int mindist = INT_MAX;
        int maxdist = criticalPoints[s-1] - criticalPoints[0];
        for(int i  =  1; i < s;i++){
            mindist = min(mindist,criticalPoints[i]- criticalPoints[i-1]);
        }
    return {mindist,maxdist};        
    }
};