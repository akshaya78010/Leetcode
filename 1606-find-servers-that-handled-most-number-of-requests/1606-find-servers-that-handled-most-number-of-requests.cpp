class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {

    if(arrival.size() < k){
     for(int i =0; i < arrival.size() ; i++)
     {
        arrival[i]-=1;
     }
     return arrival;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    set<int>s;
    map<int,int>mpp;
    int find_ind;
    for(int i =0; i < k ; i++)
    {
        mpp[i] = 1;
        pq.push({arrival[i] + load[i] , i});
        cout<<1<<'\n';
    }   


    cout<<'\n';
    for(int i = k ; i < arrival.size() ; i++)
    {
        
        while(pq.top().first <= arrival[i] && !pq.empty()){
            s.insert(pq.top().second);
            pq.pop();
            cout<<2<<'\n';
        }

        if(s.empty()){
            continue;
        }

         find_ind = i%k;
        auto it = s.lower_bound(find_ind);
        int val = *it;

        // if(it == s.end()){
        //     val = *s.begin();
        // }
        // mpp[val] +=1;
        // pq.push({arrival[i] + load[i],val});
        // s.erase(val);

        if(it != s.end()){
            pq.push({arrival[i] + load[i],*it});
            mpp[*it]+=1;
            s.erase(it);
        }
        else
        {
            pq.push({arrival[i] + load[i],*(s.begin())});
            mpp[*(s.begin())]+=1;
            s.erase(s.begin());
        }
        cout<<3<<'\n';
    }

   
    //greater in map

    vector<int>res;
    int maxi = 0;
    for(auto it = mpp.begin() ; it != mpp.end() ; it++){
        if(maxi < it->second){
            maxi = it->second;
        }
        cout<<4<<'\n';
    }
    
    for(auto it  = mpp.begin() ; it != mpp.end() ; it++)
    {
        if(it->second == maxi){
            res.push_back(it->first);
        }
        cout<<5<<'\n';
    }
    
    return res;
    }
};