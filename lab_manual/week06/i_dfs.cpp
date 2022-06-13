
#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int adj[7][6]={
//       {0,1,1,0,0,0},
//       {0,0,0,0,0,1},
//       {0,0,0,1,0,0},
//       {1,1,0,0,0,0},
//       {0,1,0,1,0,0},
//       {0,0,1,0,0,0},
//       {0,0,0,0,0,0}
//     };
//     int src,dest;
//     cout<<"Source node"<<endl;
//     cin>>src;
//     cout<<"Destination node"<<endl;
//     cin>>dest;
//     stack<int>st;
//     st.push(src);
//     while(!st.empty()){
//         int temp=st.top();
//         G[6][temp]=1;
//         st.pop();
//         for(int i=0;i<6; i++){
//             if(G[temp][i]==1 and G[6][i]==0){
//                 st.push(i);
//             }
//         }
//     }
//     // for(int i=0; i<6 ;i++){
//     //     cout<<adj[6][i]<<" ";
//     // }
//     if(G[6][dest]==1){
//       cout<<"Path exist";
//     }
//     else{
//       cout<<"Not exist";
//     }
//   return 0;
// }

class Solution {
    public:
        bool dfs(int src, int dest, int n, vector<int>adj[], vector<int>&vis){
            vis[src]=1;
            if(src==dest) return true;
            for(auto it: adj[src]){
                if(!vis[it]){
                    bool p=dfs(it,dest,n,adj,vis);
                    if(p) return p;
                }
            }
            return false;
        }
};

void addEdge(vector <int> adj[], int u, int v){
    adj[u].push_back(v);

    // for undirected graph
    // adj[v].push_back(u);
}

int main()
{
    int side;
    cin>>side;
    vector <int> adj[side];
    vector <int> vis(side,0);
    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++){
            int temp;
            cin>>temp;
            if(temp) addEdge(adj, i, j);
        }
    }
    int src,dest;
    cin>>src>>dest;
    Solution gr;
    if(gr.dfs(src,dest,side,adj,vis)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}