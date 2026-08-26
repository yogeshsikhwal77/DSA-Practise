class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.empty()) return;
        int n = matrix.size();
        int k=0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

        // while(k<n/2){
        //     for(int i=0;i<n;i++){
        //         swap(matrix[i][k],matrix[i][n-k-1]);
        //     }
        //     k++;
        // }
    }
};