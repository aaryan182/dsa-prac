// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

class Solution {
public:
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> result;
        int n = mat.size();
        
        if (mat[0][0] == 0 || mat[n-1][n-1] == 0) {
            return result;
        }
        
        string path = "";

        vector<int> dx = {1, 0, 0, -1};  
        vector<int> dy = {0, -1, 1, 0};
        vector<char> dir = {'D', 'L', 'R', 'U'};
        
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        backtrack(0, 0, mat, n, visited, path, result, dx, dy, dir);
        return result;
    }

private:
    void backtrack(int x, int y, vector<vector<int>>& mat, int n, vector<vector<bool>>& visited, string& path, vector<string>& result, vector<int>& dx, vector<int>& dy, vector<char>& dir) {
        if (x == n - 1 && y == n - 1) {
            result.push_back(path);
            return;
        }

        visited[x][y] = true;

        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (isSafe(newX, newY, mat, n, visited)) {
                path.push_back(dir[i]);
                backtrack(newX, newY, mat, n, visited, path, result, dx, dy, dir);
                path.pop_back();
            }
        }
        visited[x][y] = false;
    }
    bool isSafe(int x, int y, vector<vector<int>>& mat, int n, vector<vector<bool>>& visited) {
        return (x >= 0 && x < n && y >= 0 && y < n && mat[x][y] == 1 && !visited[x][y]);
    }
};