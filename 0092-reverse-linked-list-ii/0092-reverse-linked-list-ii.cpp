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
     ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *nxt=head->next;
        
        ListNode *ptr=head;
        while(curr!=NULL){
             nxt=curr->next;
           curr->next=prev;
             prev=curr;
            curr=nxt;
       }
        
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(left==right)return head;
        int count=1;
        ListNode *n=head;
        ListNode *prev=NULL;
        
        while(count!=left){
            prev=n;
            n=n->next;
            count++;
        }
        ListNode *st=n;
    
        while(count!=right){
            n=n->next;
            count++;
        }
        
      
      ListNode *sec_list=n->next;
      n->next=NULL;
       
        ListNode *rev_list=reverseList(st);
        
        if(prev!=NULL){
            prev->next=rev_list;

            while(prev->next){
                prev=prev->next;
            }
            
             prev->next=sec_list;
        }
        else{
            
            head=rev_list;
            prev=head;
            
            while(prev->next){
                prev=prev->next;
            }
             prev->next=sec_list;
        }
      
        
        return head;
    }
};