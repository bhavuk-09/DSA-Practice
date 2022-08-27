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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int c=1;
        if(head->next == NULL) {
            ListNode* newnode=NULL;
            head=newnode;
            return head;
        };
        while(temp->next != NULL){
            temp=temp->next;
            c++;
        }
        int mid=c/2;
        
        temp=head;
        while(mid>1){
            temp=temp->next;
            mid--;
        }
        ListNode*t= temp;
        t->next=temp->next->next;
        
        return head;
        
    }
};
