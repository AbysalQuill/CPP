#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(l);i<(r);i++)
vector<int>g[10];
int vis[10];
void dfs(int u){
    cout<<u<<" ";//访问这个点
    vis[u]=1;//访问过了
    for (int v:g[u]){//访问这个点的所有邻接点
        if (!vis[v]){//如果邻接点没有被访问过
            dfs(v);//访问这个点
            // g[u]带顺序，如果g[u]是{2,3}，先访问2，再访问3
        }
    }
}
int main(){
    g[1]={2,3};
    g[2]={1,4,5};
    g[3]={1};
    g[4]={2};
    g[5]={2};
    dfs(1);
    return 0;
}
