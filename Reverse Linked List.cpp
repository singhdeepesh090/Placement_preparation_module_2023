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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* p=NULL,*n=head->next,*curr=head;

        while(curr!=NULL)
        {
            curr->next=p;
            p=curr;
            curr=n;
            if(n!=NULL)n=n->next; 
            

        }
        return p;
        
    }
};