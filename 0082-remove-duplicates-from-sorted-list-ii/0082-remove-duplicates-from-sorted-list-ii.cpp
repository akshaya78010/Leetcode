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
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head || !head->next)
        {
            return head;
        }
        map<int,int>mpp;

        ListNode *temp = head;

        while(temp != NULL)
        {
            mpp[temp->val] += 1;
            temp = temp->next;
        }

        ListNode *temp1 = head;
        ListNode *prev = temp1;
        for(auto it = mpp.begin() ; it != mpp.end() ; it++)
        {   
            if(it->second == 1)
            {
                prev = temp1;
                temp1->val = it->first;
                temp1 = temp1->next;
            }
        }

        prev->next = NULL;

        if(mpp[head->val] > 1){
            head = NULL;
        }
        return head;
    }
};