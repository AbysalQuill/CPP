#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.empty()<<endl;
    //改变大小,大于原数组，多出来的元素被初始化为0,少了截断后续部分
    v.resize(5);
    for (int i:v) cout<<i<<" ";
    cout<<endl;
}