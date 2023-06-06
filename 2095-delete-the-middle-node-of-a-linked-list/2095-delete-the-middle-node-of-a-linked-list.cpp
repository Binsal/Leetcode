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
        ListNode *h=head;
        int len=0;
        
        while(head){
            len++;
            head=head->next;
        }
        
        if(len==1)return NULL;
        if(len==2){
            h->next=NULL;
            return h;
        }
        
        int mid=ceil(len/2);
      
        head=h;
        len=0;
        
        while(head){
            len++;
            if(len==mid){
                head->next=head->next->next;
                break;
            }
            head=head->next;
        }
        
        return h;
    }
};