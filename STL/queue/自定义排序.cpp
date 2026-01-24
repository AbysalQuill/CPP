#include <bits/stdc++.h>
using namespace std;
struct Person{
    string name;
    int age;                                        
};
struct CmpAge{
    bool operator()(const Person& a,const Person& b){
        return a.age<b.age;
    }
};
//按姓名升序，年龄降序排列
struct CmpNameAge{
    bool operator()(const Person& a, const Person& b)const{
        return a.name==b.name?a.age>b.age:a.name<b.name;
    }
};
int main(){
    priority_queue<Person,vector<Person>,CmpNameAge>pq;
    pq.push({"张三",18});
    pq.push({"李四",16});
    pq.push({"王五",20});
    pq.push({"赵六",19});
    
    cout << "按姓名升序，年龄降序排列:" << endl;
    while(!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().age<<endl;
        pq.pop();
    }
}



