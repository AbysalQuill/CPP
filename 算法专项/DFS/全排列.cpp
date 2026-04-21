#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
using namespace std;

vector<int>path;//记录当前路径
vector<vector<int>>res;//记录所有路径
vector<bool>vis;//记录哪些数字被访问过了
int n;

void dfs(vector<int>&nums){
    if (path.size()==n){//如果当前路径的长度等于 n 了，说明找到了一条完整的路径
        res.push_back(path);//把这条路径加入结果中
        return;
    }
    rep(i,0,n-1){
        if (!vis[i]){//如果这个数字没有被访问过
            vis[i]=1;//标记这个数字被访问过了
            path.push_back(nums[i]);//把这个数字加入当前路径
            dfs(nums);//继续搜索下一个数字
            path.pop_back();//回退，把这个数字从当前路径中移除
            vis[i]=0;//标记这个数字没有被访问过了
        }
    }
}

int main(){
    vector<int>nums={1,2,3};//要全排列的数字
    n=nums.size();
    vis.resize(n);//初始化访问数组的大小
    dfs(nums);//开始搜索
    for (auto &p:res){
        for (auto &x:p) cout<<x<<" ";//输出每条路径
        cout<<endl;
    }
    return 0;
}
