#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>mp={{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"}};
    //查找元素
    cout<<mp[1]<<endl;
    cout<<mp.at(1)<<endl;
    cout<<mp.find(1)->second<<endl;
    //检查是否存在
    cout<<mp.count(1)<<endl;
    cout<<mp.count(6)<<endl;

    cout<<mp.lower_bound(1)->second<<endl;//找到第一个大于等于1的元素的值
    cout<<mp.upper_bound(1)->second<<endl;//找到第一个大于1的元素值

    //找到第一个大于等于1的元素值和第一个大于1的元素值,和上面两行等价
    cout<<mp.equal_range(1).first->second<<" "<<mp.equal_range(1).second->second<<endl;
    cout<<mp.begin()->second<<" "<<mp.rbegin()->second<<endl;//获取第一个和最后一个元素值
    cout<<mp.lower_bound(1)->first<<endl;//获取第一个大于等于1的元素的键值
    cout<<mp.upper_bound(1)->first<<endl;
    
    //获取第一个大于等于1的元素的键值和第一个大于1的元素的键值,和上面两行等价
    cout<<mp.equal_range(1).first->first<<" "<<mp.equal_range(1).second->first<<endl;
    cout<<mp.begin()->first<<" "<<mp.rbegin()->first<<endl;//获取第一个和最后一个元素的键值
}