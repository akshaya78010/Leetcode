class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
      // sort(timePoints.begin(),timePoints.end());
  vector<int>arr;
  for(auto each:timePoints)
  {
    
     //each.erase(2,1);
      int s1 = stoi(each.substr(0,2))*60 + stoi(each.substr(3,2));
      //cout<<s1<<endl;
      arr.push_back(s1);
    
  }
  sort(arr.begin(),arr.end());
  int min = INT_MAX;
 for(int i = 1; i < arr.size() ; i++)
  {
    if(abs(arr[i] - arr[i-1]) < min)
    {
      min = abs(arr[i] - arr[i-1]);
    }
  }
  int mini = abs(arr[0]+(1440 - arr[arr.size() - 1]));
return min < mini?min:mini;
    }
};