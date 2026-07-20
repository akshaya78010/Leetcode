class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();

        vector<int>visited(n, 0);
        queue<int> q;

        int components = 0;

        int node;
        for(int j = 0; j < n; j++) {

            if (!visited[j]) {
                components += 1;
            }

            q.push(j);
            visited[j] = 1;

            while (!q.empty()) {
                node = q.front();

                q.pop();

                for (int i = 0; i < n; i++) {
                    if (isConnected[node][i] == 1) {
                        if (!visited[i]) {
                            visited[i] = 1;
                            q.push(i);
                        }
                    }
                }
            }
        }
        return components;
    }
};