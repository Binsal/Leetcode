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
    ListNode* partition(ListNode* head, int x) {
        ListNode *dummy= new ListNode();
        ListNode *l1=dummy;
        ListNode *l2=new ListNode();
        ListNode *dummy2=l2;
        
        while(head){
            if(head->val<x){
                l1->next=head;
                l1=l1->next;
                head=head->next;
            }
            else{
                l2->next=head;
                l2=l2->next;
                head=head->next;
            }
        }
        
        l1->next=dummy2->next;
        l2->next=NULL;
        return dummy->next;
    }
};