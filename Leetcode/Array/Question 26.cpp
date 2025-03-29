class Solution {
    public:
    
    void rotate(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
    
        // Transpose the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    
        // Reverse each row to get the 90-degree clockwise rotation
        for (auto& row : matrix) {
            reverse(row.begin(), row.end());
        }
    }
    };