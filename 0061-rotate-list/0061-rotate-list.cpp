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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(k == 0 || !head || !head->next)
        {
            return head;
        }
        /*size*/

        ListNode *it = head;
        int n = 0;
        while(it != NULL)
        {
            n+=1;
            it = it->next;
        }


        ListNode *temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = head;

        ListNode *temp1 = head;

        int t;
        t = k%n;
        t = n-t-1;
        t+=1;

     ListNode *prev = temp1;
        while(t--)
        {
            prev = temp1;
            temp1 = temp1->next;
        }

        prev->next = NULL;
        head = temp1;

        return head;
    }
};