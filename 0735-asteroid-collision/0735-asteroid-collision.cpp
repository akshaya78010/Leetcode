class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroid) {
        
        int n = asteroid.size();
        int i = 1;
        stack<int>st;

        st.push(asteroid[0]);
        int a,b;
        int c,d;
        while(i < n){
            if(st.empty()){
                st.push(asteroid[i]);
                i+=1;
                continue;
            }
            a = st.top();
            b = asteroid[i];
            cout<<a<<" "<<b<<'\n';

           
            if(a > 0 && b < 0){
                //  cout<<"a:"<<a<<" "<<"b:"<<b<<'\n';
                c = st.top();
                d = abs(asteroid[i]);

                if(!st.empty() && c < d){
                    // while(!st.empty() && st.top() < d){
                        cout<<"popped:"<<st.top()<<'\n';
                        st.pop();
                    // }

                    // cout<<"one:"<<asteroid[i]<<'\n';
                    // d = abs(asteroid[i]);
                    
                    // cout<<"two:"<<asteroid[i]<<" "<<(i<n) ? true : false<<'\n';
                    
                    // if(i < n){
                    // cout<<"pushed:"<<asteroid[i]<<'\n';
                    // st.push(asteroid[i]);
                    // }
                    // i+=1;
                }
                else if(!st.empty() && c == d){
                    cout<<"popped:"<<st.top()<<'\n';
                    st.pop();
                    i+=1;
                }
                else{
                // while(i < n && !st.empty() && st.top() > d){
                        cout<<"Skipped"<<d<<'\n';
                        d = asteroid[i];
                        i+=1;
                    // }
                }
            }
            else{
                cout<<"pushed:"<<asteroid[i]<<'\n';
                st.push(asteroid[i]);
                i+=1;
                cout<<"i:"<<i<<'\n';
            }
            
            // i+=1;
        }

        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(),res.end());
        return res;
    }
};