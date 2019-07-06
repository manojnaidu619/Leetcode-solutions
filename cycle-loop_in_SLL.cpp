class Solution {
public:
    bool hasCycle(ListNode *head) {
       struct ListNode *p=head, *q=head;
        if(!head || head->next==NULL){
            return false;
        }
        while(p!=NULL && p->next!=NULL){
            p=p->next->next;
            q=q->next;
            if(p==q){
                return true;
            }
        }
        return false;
    }
};
