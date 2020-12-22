class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3= new ListNode();
        ListNode* temp=l3;
        while ((l1!=nullptr) && (l2!=nullptr)){
            if(l1->val>=l2->val)
            {
                temp->next = l2;
                l2 = l2->next;
            }
            else 
            {
                temp->next = l1;
                l1 = l1->next;
            }
            temp = temp->next;
        }
        if(l1!=NULL) temp->next = l1;
        else temp->next = l2;
        return l3->next;
    }
};
