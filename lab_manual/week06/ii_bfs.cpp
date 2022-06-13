#include<bits/stdc++.h>
using namespace std;

bool bipartite(vector<int>adj[], int n, int s){
    int col[n];
    memset(col, -1, sizeof col);
    col[s] = 1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(auto it: adj[top]){
            if( col[it]==col[top]){
                return false;
            }
            if(col[it]==-1){
                col[it]=1-col[s];
                q.push(it);
            }
        }
    }
    return true;
}

int main()
{
    int side;
    cin>>side;
    vector<int> adj[side];
    for(int i=0;i<side;i++){
        for(int j=0;j<side;j++){
            int temp;
            cin>>temp;
            if(temp) adj[i].push_back(j);
        }
    }
    if(bipartite(adj,side,0)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
/*
5
0 1 1 0 0
1 0 1 1 1 
1 1 0 1 0
0 1 1 0 1
0 1 0 1 0
*/