// O(m+n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> i_collect;
        vector<int> j_collect;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    i_collect.push_back(i);
                    j_collect.push_back(j);
                    
                }
            }
        }

        for(int j : j_collect){
            for(int i=0;i<matrix.size();i++){
               matrix[i][j] = 0;
            }
        }
        for(int i : i_collect){
            for(int j=0;j<matrix[0].size();j++){
               matrix[i][j] = 0;
            }
        }

    
    }
};

// O(1)
