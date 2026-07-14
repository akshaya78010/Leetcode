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
    ListNode *get_mid(ListNode *head){

        // if(!head || !head->next){
        //     return head;
        // }

        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode *merge(ListNode *left,ListNode *right){

        ListNode *newnode = new ListNode(0);
        ListNode *temp = newnode;

        while(left && right){
            if(left->val < right->val){
                temp->next = left;
                left = left->next;
            }
            else{
                temp->next = right;
                right = right->next;
            }

            temp = temp->next;
        }

        if(left){
            temp->next = left;
        }
        else{
            temp->next = right;
        }

        return newnode->next;
    }

    ListNode* sortList(ListNode* head) {
        
        if(!head || !head->next){
            return head;
        }

        ListNode *mid = get_mid(head);
        ListNode *right = mid->next;
        mid->next = NULL;

        ListNode *left = sortList(head);
        right = sortList(right);

        return merge(left,right);
    }
};