#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> positions;

        ListNode* prev = NULL;
        ListNode* curr = head;
        
        int pos = 0;
        
        while(curr != NULL){

            if(prev != NULL && curr->next != NULL && prev->val > curr->val && curr->val < curr->next->val){
                positions.push_back(pos);
            }
            if(prev != NULL && curr->next != NULL && prev->val < curr->val && curr->val > curr->next->val){
                positions.push_back(pos);
            }
            prev = curr;
            curr = curr->next;
            pos++;
        }

        if (positions.size() < 2) return {-1, -1};
        
        int mindistance = INT_MAX;
        for (int i = 0; i < positions.size()-1; i++){
            mindistance = min(positions[i+1] - positions[i], mindistance);
        }
        
        return {mindistance, positions.back() - positions[0]};
    }
};





















