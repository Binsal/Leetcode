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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *node=head;
        
//         while(head->val!=0){
//             head=head->next;
//         }
        
        while(head){
            ListNode *prev=head;
            long long int sum=0;
            
            while(prev && prev->val!=0){
                sum+=prev->val;
                prev=prev->next;
            }
            
            head->val=sum;
            head->next=prev->next;
            
            head=head->next;
            
            
        }
        
        return node->next;
    }
};