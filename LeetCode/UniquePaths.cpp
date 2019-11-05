class Solution {
public:
    int uniquePaths(int m, int n) {
        int unique_paths[m][n];
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(i == 0 || j == 0) {
                    unique_paths[i][j] = 1;
                } else {
                    unique_paths[i][j] = unique_paths[i-1][j] + unique_paths[i][j-1];
                }
            }
        }
        
        return unique_paths[m-1][n-1];
    }
};