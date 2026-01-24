#include<iostream>
#include<string>
using namespace std;

class MyClass{
private:
    string name;
    int*data;
    
public:
    MyClass(string n,int value){
        name=n;
        data=new int(value);
        cout<<"构造函数被调用，创建对象: "<<name<<endl;
    }
    
    ~MyClass(){
        cout<<"析构函数被调用，销毁对象: "<<name<<endl;
        if(data!=nullptr){
            delete data;
            data=nullptr;
        }
    }
    
    void display(){
        cout<<"对象: "<<name<<", 数据: "<<*data<<endl;
    }
};

void functionScope(){
    cout<<"进入函数作用域"<<endl;
    MyClass localObj("局部对象",100);
    localObj.display();
    cout<<"退出函数作用域"<<endl;
}

int main(){
    cout<<"=== 析构函数示例 ==="<<endl;
    
    MyClass*dynamicObj=new MyClass("动态对象",200);
    dynamicObj->display();
    
    cout<<endl;
    
    functionScope();
    
    cout<<endl;
    
    delete dynamicObj;
    
    cout<<endl<<"main函数结束，程序退出"<<endl;
    
    return 0;
}