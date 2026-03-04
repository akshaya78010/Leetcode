class Solution {
public:
    bool is_vowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return 1;
        }
        return 0;
    }
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        vector<int> arr(words.size());
        vector<int> brr;
        int number = 0;
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            if (is_vowel(s[0]) == 1 && is_vowel(s[s.size() - 1]) == 1) {
                number += 1;
                ;
            }
            arr[i] = number;
            cout << number << " ";
        }
        cout << '\n';
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        for (int i = 0; i < queries.size(); i++) {
            int a = queries[i][0];
            int b = queries[i][1];
            if (a > 0) {
                if (arr[a - 1] != arr[a]) {
                    if (arr[b] == 0 || arr[a] == 0) {
                        brr.push_back(arr[b] - arr[a]);
                    } else {
                        brr.push_back(arr[b] - arr[a] + 1);
                    }
                } else {
                    if (arr[b] == 0 || arr[a] == 0) {
                        brr.push_back(arr[b] - arr[a]);
                    } else {
                        brr.push_back(arr[b] - arr[a]);
                    }
                }
            } else if (a == 0) {
                if (arr[b] == 0 || arr[a] == 0) {
                    brr.push_back(abs(arr[b] - arr[a]));
                } else {
                    brr.push_back(arr[b] - arr[a] + 1);
                }
            }
        }
        return brr;
    }
};