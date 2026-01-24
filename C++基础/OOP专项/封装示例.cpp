#include<iostream>
#include<string>
using namespace std;

//定义person类，演示封装概念
class person{
    public:
    string name;  //公有成员变量
    int age;
    
    //成员函数，显示个人信息
    void say(){
        cout<<"你好,我是"<<name<<"今年"<<age<<"岁"<<endl;
    }
    
    //无参构造函数
    person(){
        name="未知";
        age=0;
        cout<<"无参构造函数"<<endl;
    }

    //有参构造函数
    person(string n,int a){
        name=n;
        age=a;
        cout<<"有参构造函数"<<endl;
    }

    //拷贝构造函数
    person(person&p){
        name=p.name;
        age=p.age;
        cout<<"拷贝构造函数"<<endl;
    }
    
    //友元函数声明
    friend void showPerson(person&p);
    
    //成员函数，显示指定person的信息
    void showPerson(person&p){
        cout<<"姓名:"<<p.name<<endl<<"年龄:"<<p.age<<endl;
    }
    
    //显示自身信息
    void show(){
        cout<<"姓名:"<<name<<endl<<"年龄:"<<age<<endl;
    }

    //析构函数
    ~person(){
        cout<<"对象已经销毁"<<endl;
    }
};

//实现友元函数
void showPerson(person&p){
    cout<<"通过友元函数访问 - 姓名:"<<p.name<<" 年龄:"<<p.age<<endl;
}

int main(){
    //创建不同类型的person对象
    person p1;
    p1.show();
    person p2("张三",18);
    p2.show();
    person p3(p2);
    p3.show();
    p3.showPerson(p2);
    
    //使用友元函数
    cout<<"使用友元函数："<<endl;
    showPerson(p1);
    showPerson(p2);
    showPerson(p3);
    return 0;
}