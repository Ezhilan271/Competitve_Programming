class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int i=1,count=0;
        while (temp!=nullptr){
            count++;
            temp=temp->next;
        }
        while (i<(count/2)+1){ 
            i++;  
            head=head->next;
        }
        return head;
    }
};
