class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode* > value;
        for (ListNode* temp=head; temp!=NULL;temp=temp->next){
            if (value.find(temp->next)!=value.end()) return true;   
            else value.insert(temp->next);        
        }
        return false;
    }
};
