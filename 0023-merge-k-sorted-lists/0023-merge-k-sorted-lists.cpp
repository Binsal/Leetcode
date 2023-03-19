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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        ListNode *node=new ListNode();
        ListNode *nw=node;
        vector<int>v;
        
        for(int i=0;i<lists.size();i++){
            ListNode *nde=lists[i];
            
            while(nde){
                v.push_back(nde->val);
                nde=nde->next;
            }
        }
        sort(v.begin(),v.end());
        
        for(auto x:v){
            nw->next=new ListNode(x);
            nw=nw->next;
        }
        return node->next;
    }
};