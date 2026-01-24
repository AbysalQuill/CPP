#include<utility>
#include<iostream>
#include<string>
using namespace std;

int main(){
    // 创建并初始化pair对象
    pair<int,string>p1(1,"apple");
    pair<int,string>p2=make_pair(2,"banana");
    pair<int,string>p3;
    
    cout<<"p1: {"<<p1.first<<","<<p1.second<<"}"<<endl;  // 输出p1的键值对
    cout<<"p2: {"<<p2.first<<","<<p2.second<<"}"<<endl;  // 输出p2的键值对
    
    // 赋值操作
    p3=p1;
    cout<<"赋值操作后p3: {"<<p3.first<<","<<p3.second<<"}"<<endl;  // 输出赋值后的p3
    
    // 交换两个pair的值
    p1.swap(p2);
    cout<<"交换p1和p2后:"<<endl;  // 输出交换提示信息
    cout<<"p1: {"<<p1.first<<","<<p1.second<<"}"<<endl;  // 输出交换后的p1
    cout<<"p2: {"<<p2.first<<","<<p2.second<<"}"<<endl;  // 输出交换后的p2
    
    // 使用花括号初始化 (C++11)
    pair<int,double>p4{4,3.14};
    cout<<"使用花括号初始化的p4: {"<<p4.first<<","<<p4.second<<"}"<<endl;  // 输出使用花括号初始化的p4
    
    // pair的比较运算
    pair<int,int>a(1,2);
    pair<int,int>b(1,3);
    pair<int,int>c(2,1);
    
    cout<<"比较运算结果:"<<endl;  // 输出比较运算提示信息
    cout<<"a<b: "<<(a<b)<<endl;  // 输出a<b的比较结果(true，因为a.first==b.first，但a.second<b.second)
    cout<<"a<c: "<<(a<c)<<endl;  // 输出a<c的比较结果(true，因为a.first<c.first)
    cout<<"b<c: "<<(b<c)<<endl;  // 输出b<c的比较结果(true，因为b.first<c.first)
    
    return 0;
}