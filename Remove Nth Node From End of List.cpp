
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int count = 0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp = head;
        for(int i=1;i<count-n;i++){
            temp = temp->next;
        }
        if(count-n==0){
            return head->next;
        }
        if(temp->next!=NULL){
            temp->next = temp->next->next;
            return head;
        }else{
            return NULL;
        }
    }
       



        


        
    
    
};
