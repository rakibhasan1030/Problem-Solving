#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        
        ListNode *temp = head, *mLeak;
        
        while(temp && temp->next){
             if(temp->val == (temp->next)->val){
                 mLeak = temp->next;
                 temp->next = mLeak->next; 
                 delete mLeak;
             }else{
                 temp = temp->next;
             }
        }
        return head;
    }
};