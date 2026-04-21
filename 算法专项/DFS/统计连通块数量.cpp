#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
using namespace std;
vector<int>g[10];
int vis[10];

void dfs(int u){
    vis[u]=1;//访问过了
    for (int v:g[u]){//访问这个点的所有邻接点
        if (!vis[v]){//如果邻接点没有被访问过
            dfs(v);//访问这个点
            //g[u]带顺序，如果 g[u]是{2,3}，先访问 2，再访问 3
        }
    }
}

int main(){
    //1 和 2 是一个连通块，4 和 5 是一个连通块，3 是一个连通块
    g[1]={2},g[2]={1},g[4]={5},g[5]={4};
    int res=0;
    rep(i,1,5){
        if (!vis[i]){//如果这个点没有被访问过
            dfs(i);//访问这个点所在的连通块
            res++;//连通块数量加 1
        }
    }
    cout<<res<<endl;
    return 0;
}