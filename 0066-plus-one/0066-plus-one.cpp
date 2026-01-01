class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size();
      int num = digits[n-1];
    int sum = num;
    int carry = 1;
      for(int i = n-1 ; i>= 0 ; i--){
        digits[i] += carry;
        sum = digits[i];
        carry = sum/10;
            if(sum > 9){
                digits[i] = sum%10;
            }
            cout<<carry<<" ";
      }

      if(carry > 0){
        digits.insert(digits.begin(),carry);
      }

      return digits;
    }
};