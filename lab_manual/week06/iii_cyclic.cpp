#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        bool checkCycle(int node, vector<int>adj[], int vis[], int dfsVis[]){
            vis[node]=1;
            dfsVis[node]=1;
            for(auto it: adj[node]){
                if(!vis[it]){
                    if(checkCycle(it, adj, vis, dfsVis)) return true;
                }
                else if(dfsVis[it]) return true;
            }
            dfsVis[node]=0;
            return false;
        }
    public:
        bool isCyclic(int N, vector<int> adj[]){
            int vis[N], dfsVis[N];
            memset(vis, 0, sizeof vis);
            memset(vis, 0, sizeof dfsVis);
            
            for(int i=0; i<N; i++){
                if(!vis[i]){
                    if(checkCycle(i, adj, vis, dfsVis)){
                        return true;
                    }
                }
            }
            return false;
        }
};

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
    Solution obj;
    if(obj.isCyclic(side, adj)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
/*
5
0 1 1 0 0 
0 0 0 1 1 
0 1 0 1 0
0 0 0 0 1
0 0 0 0 0
*/