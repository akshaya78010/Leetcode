class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int i= 0;
        int j = people.size() - 1;

        sort(people.begin(),people.end());

        int res = 0;

        while(i <= j){
            if((people[j] + people[i]) <= limit){
                i+=1;
                j-=1;
                res+=1;
            }
            else if(people[j] <= limit){
                res += 1;
                j-=1;
            }
            else if(people[i] <= limit){
                res += 1;
                i+=1;
            }
        }

        return res;
    }
};