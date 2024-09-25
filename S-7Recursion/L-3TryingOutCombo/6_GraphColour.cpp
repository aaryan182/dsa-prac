// https://www.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1

class Solution{
public:

    bool isSafe(int node, bool graph[101][101], int color[], int n, int col){
        for(int i = 0; i<n;i++){
            if(graph[node][i] == 1 && color[i] == col) return false;
        }
        return true;
    }
    
    bool solve(int node, bool graph[101][101], int color[], int m, int n){
        if(node == n) return true;
        
        for(int i =1; i<=m; i++){
            if(isSafe(node, graph, color, n, i)){
                color[node] = i;
                if(solve(node+1, graph, color, m, n)) return true;
                
                color[node] = 0;
            }
        }
        return false;
    }

    bool graphColoring(bool graph[101][101], int m, int n) {
        int color[n] = {0};
        if(solve(0,graph, color , m,n)) return true;
        
        return false;
    }
};