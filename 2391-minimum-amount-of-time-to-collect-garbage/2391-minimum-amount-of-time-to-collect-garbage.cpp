class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        for(int i = 1; i < travel.size() ; i++){
            travel[i] = travel[i-1] + travel[i];
        }

        int glass = 0;
        int glass_ind = -1;
        int paper=  0;
        int paper_ind = -1;
        int metal = 0;
        int metal_ind = -1;
        int n = garbage.size();

        for(int i = 0; i < n ; i++){
         for(int j =0; j < garbage[i].size() ; j++){
            if(garbage[i][j] == 'G'){
                glass += 1;
                glass_ind = i;
            }
            else if(garbage[i][j] == 'P'){
                paper += 1;
                paper_ind = i;
            }
            else if(garbage[i][j] == 'M'){
                metal += 1;
                metal_ind = i;
            }
         }   
        }

        if(glass_ind - 1 >= 0){
            cout<<"A"<<glass_ind<<'\n';
        glass += travel[glass_ind - 1];
        }

        if(paper_ind - 1 >= 0){
            cout<<"b"<<paper_ind - 1<<'\n';
        paper += travel[paper_ind - 1];
        }

        cout<<"m"<<metal_ind<<'\n';
        if(metal_ind - 1 >= 0){
            cout<<"c"<<metal_ind - 1<<'\n';
        metal += travel[metal_ind - 1];
        }

        return (glass + paper + metal);
    }
};