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
        ListNode* Middle(ListNode* head)
        {
            ListNode* slow=head,*fast=head;
            while(fast!=NULL && fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
            }
            return slow;

        }

       bool comparison(ListNode *head1 ,ListNode* head2)
       {
           while(head1->next!=NULL  && head1->next!=NULL)
           {
               if(head1->val !=head2->val){
                   return false;
               }

                   head1=head1->next;
                   head2=head2->next; 
               }
               return true;
           }
       
     

      ListNode* reverse(ListNode* head) {
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



    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* L1=head;
        ListNode* mid=Middle(L1);
        ListNode* L2=reverse(mid);
        return comparison(L1,L2);

        
    }
      
};