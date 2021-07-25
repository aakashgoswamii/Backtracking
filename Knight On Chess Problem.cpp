#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&board,int x1,int x2,int y1,int y2){
    vector<pair<int,int>>dirs = {{2,-1},{-2,1},{-2,-1},{2,1},{-1,-2},{1,-2},{-1,2},{1,2}};
    queue<pair<int,int>>q;
    q.push({x1,x2});
    int count = 0;
    vector<vector<bool>>isVisited(4,vector<bool>(4,false));
    isVisited[x1][x2] = true;
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
        int u = q.front().first;
        int v = q.front().second;
        q.pop();
        // isVisited[u][v] = true;
            // board[u][v] = -2;
        if(u==y1&&v==y2)
            {
                cout<<count;
                return;
            }
    
        for(auto dir:dirs){
            int a = u+dir.first;
            int b = v + dir.second;
            if(a>=0&&a<board.size()&&b>=0&&b<board[0].size()&&isVisited[a][b]==false){
                // board[a][b] = -2;
                isVisited[a][b] = true;
                q.push({a,b});
            }
        }
    }
    count++;
    }
    if(count==0)
        cout<<0;
    return;
}

int main()
    {
        vector<vector<int>>board(4,vector<int>(4,0));
        int x1 = 1;
        int x2 = 3;
        int y1 = 2;
        int y2 = 3;
        
        dfs(board,x1,x2,y1,y2);
        
    }
