#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution {
public:
    node* oddEvenList(node* head) {
        
    if (head == NULL || head->next == NULL || head->next->next == NULL) return head; /* Boundary Cases*/

    auto *odd = head;
    auto *even = head->next;
    auto *evenStart = head->next;

    while (even->next != NULL && odd->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        if (odd->next != NULL){
            even = even->next;
        }
            
    }
    odd->next = evenStart;
    return head; 
  }
};