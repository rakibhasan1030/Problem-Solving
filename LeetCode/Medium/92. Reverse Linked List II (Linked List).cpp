
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(!head || left == right) return head;
        
        ListNode dummyHead(0);
        dummyHead.next = head;
        
        auto* nodeBeforeSublist = &dummyHead;
        int pos = 1;
        while(pos < left){
            nodeBeforeSublist = nodeBeforeSublist->next;
            pos++;
        }
        auto* workingPtr = nodeBeforeSublist->next;
        while(left < right) {

            // cut the new node out
            auto* nodeToBeExtracted = workingPtr->next;
            workingPtr->next = nodeToBeExtracted->next;  
            
            // pasting it at the front
            nodeToBeExtracted->next = nodeBeforeSublist->next;
            nodeBeforeSublist->next = nodeToBeExtracted;
            
            left++;
        }
        
        return dummyHead.next;
    }
};