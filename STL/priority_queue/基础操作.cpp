#include <bits/stdc++.h>
using namespace std;
//队列原理为先进先出
int main(){
    priority_queue<int>q;
    cout<<"优先级队列，大的优先"<<endl;
    q.push(30);
    q.push(20);
    q.emplace(50);
    q.push(10);
    cout<<"队列元素"<<endl;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"优先级队列，小的优先"<<endl;
    //vector队列，其他同理
    priority_queue<int,vector<int>,greater<int>>q1;
    q1.push(30);
    q1.push(20);
    q1.emplace(50);
    q1.push(10);
    cout<<"队列元素"<<endl;
    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    cout<<endl;


    
}