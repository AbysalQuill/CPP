#include <bits/stdc++.h>
using namespace std;
int main(){
    //队列原理为先进先出
    queue<int>q;
    cout<<"基础操作"<<endl;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"队列元素"<<endl;
    //为了遍历队列元素，先创建队列副本
    int size = q.size();
    queue<int>q1(q);
    for(int i=0;i<size; i++){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    cout<<"队列大小: "<<q.size()<<endl;
    cout<<"队列首元素: "<<q.front()<<endl;
    cout<<"队列末元素: "<<q.back()<<endl;
    cout<<"队列是否为空: "<<q.empty()<<endl;
    cout<<"队列首元素出队"<<endl;
    q.pop();
    cout<<"队列大小: "<<q.size()<<endl;
    cout<<"队列首元素: "<<q.front()<<endl;
    cout<<"队列末元素: "<<q.back()<<endl;
    cout<<"队列是否为空: "<<q.empty()<<endl;
    cout<<"队列清空"<<endl;
    while(!q.empty()){
        q.pop();
    }
}