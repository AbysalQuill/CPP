#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    list<string>ls={"apple","banana","orange","pear","grape"};
    deque<char>dq={'a','b','c','d','e','f'};
    
    // 使用distance()计算迭代器之间的距离
    auto start=v.begin();
    auto end=v.end();
    cout<<"vector的距离: "<<distance(start,end)<<endl;  // 输出10 (容器大小)
    
    auto pos1=v.begin();
    auto pos2=v.begin()+5;
    cout<<"v.begin()到v.begin()+5的距离: "<<distance(pos1,pos2)<<endl;  // 输出5
    
    // 在list中使用distance
    auto l_start=ls.begin();
    auto l_end=ls.end();
    cout<<"list的距离: "<<distance(l_start,l_end)<<endl;  // 输出5 (容器大小)
    
    auto l_pos1=ls.begin();
    advance(l_pos1,2);  // 移动到第3个元素
    cout<<"ls.begin()到第3个元素的距离: "<<distance(ls.begin(),l_pos1)<<endl;  // 输出2
    
    // 在deque中使用distance
    auto d_start=dq.begin();
    auto d_end=dq.end();
    cout<<"deque的距离: "<<distance(d_start,d_end)<<endl;  // 输出6 (容器大小)
    
    auto d_pos1=dq.begin()+3;
    auto d_pos2=dq.end();
    cout<<"dq.begin()+3到dq.end()的距离: "<<distance(d_pos1,d_pos2)<<endl;  // 输出3
    
    // 使用distance计算反向迭代器之间的距离
    auto r_start=v.rbegin();
    auto r_end=v.rend();
    cout<<"vector反向迭代器的距离: "<<distance(r_start,r_end)<<endl;  // 输出10 (容器大小)
    
    return 0;
}