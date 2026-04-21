#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
using namespace std;
int n=3;//3x3 的迷宫，找到 S 到 E 的路径
int ok=0;//是否找到终点 E
int dx[]={-1,1,0,0};//四个方向的坐标变化
int dy[]={0,0,-1,1};
/*dx[0],dy[0]=(-1,0)->上
dx[1],dy[1]=(1,0)->下
dx[2],dy[2]=(0,-1)->左
dx[3],dy[3]=(0,1)->右
*/
char mp[10][10]={
    "S..",
    "##.",
    "..E"
};//迷宫地图
int vis[3][3];//访问数组，记录哪些点被访问过了
vector<pair<int,int>> path;//记录路径，path 里存储的是坐标对 (x,y)，表示从 S 到 E 的路径上的点
void dfs(int x,int y){
    if (ok) return;//如果已经找到 E 了，就不继续搜索了
    if (mp[x][y]=='E'){//如果当前点是 E 了
        ok=1;//找到 E 了
        return;
    }
    for (auto p:path) cout<<"("<<p.first<<","<<p.second<<") ";//输出当前路径
    cout<<endl;
    vis[x][y]=1;//访问过了
    path.push_back({x,y});//把这个点加入路径
    rep(i,0,3){//四个方向
        int nx=x+dx[i],ny=y+dy[i];//下一个点的坐标
        if (nx>=0&&nx<n&&ny>=0&&ny<n&&!vis[nx][ny]&&mp[nx][ny]!='#'){//如果下一个点在地图范围内，没有被访问过，并且不是墙
            dfs(nx,ny);//访问下一个点
            if (ok) return;//如果已经找到 E 了，就不继续搜索了
        }
    }
    path.pop_back();//回退，把这个点从路径中移除
    vis[x][y]=0;//这个点没有被访问过
}
int main(){
    dfs(0,0);//从 S 所在的点开始搜索，S 在 (0,0) 位置
    if (!ok) cout<<"没有找到路径"<<endl;
    return 0;
}