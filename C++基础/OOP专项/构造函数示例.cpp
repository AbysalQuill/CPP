#include<iostream>
#include<string>
using namespace std;

class Person{
private:
    string name;
    int age;
    
public:
    Person(){
        name="未知";
        age=0;
        cout<<"无参构造函数被调用"<<endl;
    }
    
    Person(string n){
        name=n;
        age=0;
        cout<<"单参构造函数被调用"<<endl;
    }
    
    Person(string n,int a){
        name=n;
        age=a;
        cout<<"双参构造函数被调用"<<endl;
    }
    
    Person(const Person&p){
        name=p.name;
        age=p.age;
        cout<<"拷贝构造函数被调用"<<endl;
    }
    
    void display(){
        cout<<"姓名: "<<name<<", 年龄: "<<age<<endl;
    }
};

int main(){
    cout<<"=== 构造函数示例 ==="<<endl;
    
    Person p1;
    p1.display();
    
    cout<<endl;
    
    Person p2("张三");
    p2.display();
    
    cout<<endl;
    
    Person p3("李四",25);
    p3.display();
    
    cout<<endl;
    
    Person p4(p3);
    p4.display();
    
    cout<<endl;
    
    Person p5=Person("王五",30);
    p5.display();
    
    return 0;
}