class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int minV = INT_MAX;
        int neg_count =0;
        long long sum = 0;
        for(int i = 0 ;i < m; i++){
            for(int j = 0; j<n; j++){
                sum += abs(matrix[i][j]);
                minV = min(minV,abs(matrix[i][j]));
                
                if(matrix[i][j] < 0) neg_count++;
            }
    }
        if(neg_count % 2 ==0)
            return sum;
        return sum - 2 * minV;
    }
};


