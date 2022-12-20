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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n<0 || head==NULL )
            return head;
        if(head->next==NULL)
        return NULL;
    ListNode *a=head;
    int len=0;
    while(a!=NULL){
        len++;
        a=a->next;
    }
    if(len-n==0)
    return head->next;
    else{
        ListNode *p=head;
                ListNode *q=head;

        for (int i=1; i<(len-n); i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;

        return head;
    }
    }
};