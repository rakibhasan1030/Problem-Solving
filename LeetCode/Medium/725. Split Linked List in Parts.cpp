#include <bits/stdc++.h>
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*> ans; 
        
        if(head == NULL){  /* Boundary Cases */
            while(k--){
                ans.push_back(head);
            }
            return ans;
        } 

        int len = 1;
        ListNode* itr = head;
        while(itr->next != NULL){  
            len++;
            itr = itr->next;
        }
        
        int partsLen = len / k; /* How many child remain in parent list */
        int dis = len % k; /* modulus of division, which will be distributed form ascending until its */
        
        ListNode* temp = head;
        ListNode* prev = NULL; 
        int count = 0;
        while(temp != NULL || count < k){
            
            temp == NULL ? ans.push_back(NULL) : ans.push_back(temp);
            
            for(int i=0;i<partsLen+(dis>0?1:0);i++) {     
                prev = temp;
                temp = temp->next;
            }
            
            prev->next = NULL;
            count++;
            dis--;
        }
        return ans; 
    }
};