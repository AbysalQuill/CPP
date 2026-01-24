#include<iostream>
#include<string>
using namespace std;

//基类 - 动物类
class Animal{
protected:
    string name;  //保护成员，子类可访问
    int age;
    
public:
    //构造函数
    Animal(string n,int a):name(n),age(a){}
    
    //基类方法
    void eat(){
        cout<<name<<" 正在吃东西"<<endl;
    }
    
    void sleep(){
        cout<<name<<" 正在睡觉"<<endl;
    }
    
    //显示信息方法
    void showInfo(){
        cout<<"动物: "<<name<<", 年龄: "<<age<<endl;
    }
};

//派生类 - 狗类，继承自动物类
class Dog:public Animal{
private:
    string breed;  //私有成员，仅Dog类可访问
    
public:
    //派生类构造函数，调用基类构造函数
    Dog(string n,int a,string b):Animal(n,a),breed(b){}
    
    //派生类特有方法
    void bark(){
        cout<<name<<" 正在汪汪叫"<<endl;
    }
    
    //重写基类方法
    void showInfo(){
        cout<<"狗: "<<name<<", 年龄: "<<age<<", 品种: "<<breed<<endl;
    }
};

int main(){
    cout<<"=== 基础继承示例 ==="<<endl;
    
    //创建派生类对象
    Dog dog("旺财",3,"金毛");
    
    //使用继承自基类的方法
    dog.eat();
    dog.sleep();
    
    //使用派生类方法
    dog.bark();
    
    //使用重写后的方法
    dog.showInfo();
    
    return 0;
}