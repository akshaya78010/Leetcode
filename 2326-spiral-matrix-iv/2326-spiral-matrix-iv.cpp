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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>>arr(m,vector<int>(n));
        
        int top = 0;
        int left = 0;
        int right = n-1;
        int bottom = m-1;
        while(left <= right && top <= bottom){

            for(int i = top; i <= right ; i++)
            {
                if(head == NULL){
                    arr[top][i] = -1;
                }
                else{
                arr[top][i] = head->val;
                head = head->next;
                }
            }
            
            top +=1;

            for(int i = top ; i <= bottom ; i++)
            {
                if(head == NULL){
                    arr[i][right] = -1;
                }
                else{
                arr[i][right] = head->val;
                head = head->next;
                }
            }

            right -= 1;

            if(top <= bottom){
            for(int i = right ; i >= left ; i--){

                if(head == NULL)
                {
                    arr[bottom][i] = -1;
                }
                else{
                arr[bottom][i] = head->val;
                head = head->next;
                }
            }
            }

            bottom -= 1;

            if(left <= right){
            for(int i = bottom ; i >= top ; i--){
                if(head == NULL){
                    arr[i][left] = -1;
                }
                else{
                arr[i][left] = head->val;
                head = head->next;
                }
            }
            }

            left += 1;
        }

        return arr;
    }
};