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
    ListNode *reverse_ll(ListNode *head,ListNode *last){
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *nex;
        // ListNode *temp = head;
        
        while(curr != NULL){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        int n = 0;

        ListNode *dummy = head;

        while(dummy != NULL){
            dummy = dummy->next;
            n+=1;
        }
        
        cout<<n<<'\n';
        if(head->next == NULL){
            return head;
        }
        
         if(left == right){
            return head;
        }
        
        if(head->next->next == NULL)
        {
           ListNode *temp = head;
           ListNode *temp1 = head->next;
           head->next = NULL;
           temp1->next = head;
           head = temp1;
           return head;
        }

        ListNode *start = head;
        ListNode *end = head;
        ListNode *start_prev;
        ListNode *end_next;

        int l = left;
        int r = right;

        l-=1;
        r-=1;
        while(l--){
            start_prev = start;
            start = start->next;
        }

        while(r--){
            end = end->next;
            end_next = end->next;
        }
      
    //   cout<<start->val<<" "<<end->val<<" "<<start_prev->val<<" "<<end_next->val<<'\n';
      
      if(left == 1 && right < n){
        end->next = NULL;
        head = reverse_ll(start,end);
        start->next = end_next;
      }
      else if(left > 1 && right == n){
        start_prev->next = NULL;
        start_prev->next =  reverse_ll(start,end);
      }
      else if(left == 1 && right == n){
        head = reverse_ll(start,end);
      }
      else{
      start_prev->next = NULL;
      end->next = NULL;
      reverse_ll(start,end);
      start_prev->next = end;
      start->next = end_next;
      }

     return head;
    }
};