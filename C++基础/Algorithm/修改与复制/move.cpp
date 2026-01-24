#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5,6,7,8,9,10};
    vector<int>v2(10);
    cout<<"移动前v1：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    move(v1.begin(),v1.end(),v2.begin());
    cout<<"移动后v2：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    cout<<"移动后v1（值可能变为未定义）：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    vector<int>v3={1,2,3,4,5};
    vector<int>v4(5);
    cout<<"移动前v3：";
    for(int i:v3)cout<<i<<" ";
    cout<<endl;
    move(v3.begin(),v3.begin()+3,v4.begin());
    cout<<"移动前3个元素后v4：";
    for(int i:v4)cout<<i<<" ";
    cout<<endl;
    return 0;
}