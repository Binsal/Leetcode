class Solution {
    vector<vector<vector<long>>> m_memo;
    int m_max;
    
public:
    int knightDialer(int N) {
        m_memo.resize(4, vector<vector<long>>(3, vector<long>(N+1)));
        m_max = pow(10, 9) + 7;
        
        long ans = 0;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j)
                ans = (ans + dfs(N, i, j)) % m_max;
        }
        return (int) ans;
    }
    
    long dfs(int N, int row, int col) {
        if (row < 0 || row >= 4 || col < 0 || col >= 3 || (row == 3 && col != 1)) return 0;
        if (N == 1)
            return 1;
        
        if (m_memo[row][col][N] > 0)
            return m_memo[row][col][N];
        
        m_memo[row][col][N]
            = dfs(N-1, row-1, col-2) % m_max
            + dfs(N-1, row-2, col-1) % m_max
            + dfs(N-1, row-2, col+1) % m_max
            + dfs(N-1, row-1, col+2) % m_max
            + dfs(N-1, row+1, col+2) % m_max
            + dfs(N-1, row+2, col+1) % m_max
            + dfs(N-1, row+2, col-1) % m_max
            + dfs(N-1, row+1, col-2) % m_max;
        
        return m_memo[row][col][N];
    }
};
