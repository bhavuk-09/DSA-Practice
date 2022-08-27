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
        int c=1;
        ListNode*temp = head;
        while(temp->next!=NULL){
            if(n==1 and temp->next->next == NULL){
                temp->next=NULL;
                return head;
            }
            temp=temp->next;
            c++;
        }
        
        
        int res=c-n;
        if(c==1){
            ListNode* tnn=NULL;
            return tnn;
        }
        
        if(res==0 and c>1){
            head=head->next;
            return head;
        }
        temp=head;
        while(res>1){
            temp=temp->next;
            res--;
        }
        temp->next=temp->next->next;
        return head;
    }
};
