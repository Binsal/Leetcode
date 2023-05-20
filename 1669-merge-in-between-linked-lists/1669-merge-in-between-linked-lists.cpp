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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *aptr;
        ListNode *bptr;
        
        ListNode *head1=list1;
        ListNode *head2=list2;
        int count=0;
        int count2=0;
        
        while(count2<b){
            if(count<a){
                aptr=list1;
            }
            list1=list1->next;
            count++;
            count2++;
        }
        
        bptr=list1;
        //bptr->next=NULL;
        aptr->next=list2;
        
        while(list2->next){
            list2=list2->next;
        }
        
        list2->next=bptr->next;
        
       return head1; 
        
    }
};