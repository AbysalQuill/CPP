#include<iostream>
#include<string>
using namespace std;

class Animal{
protected:
    string name;
    
public:
    Animal(string n):name(n){}
    
    void eat(){
        cout<<name<<" 正在吃食物 (静态绑定)"<<endl;
    }
    
    virtual void speak(){
        cout<<name<<" 发出了动物的声音"<<endl;
    }
    
    virtual void move(){
        cout<<name<<" 正在移动"<<endl;
    }
    
    virtual ~Animal(){
        cout<<name<<" 的析构函数被调用"<<endl;
    }
};

class Dog:public Animal{
public:
    Dog(string n):Animal(n){}
    
    void speak()override{
        cout<<name<<" 汪汪叫: 汪汪汪！"<<endl;
    }
    
    void move()override{
        cout<<name<<" 跑来跑去"<<endl;
    }
};

class Cat:public Animal{
public:
    Cat(string n):Animal(n){}
    
    void speak()override{
        cout<<name<<" 喵喵叫: 喵~"<<endl;
    }
    
    void move()override{
        cout<<name<<" 轻盈地走着"<<endl;
    }
};

void animalAction(Animal*animal){
    cout<<"\n--- 通过基类指针调用 ---"<<endl;
    animal->eat();
    animal->speak();
    animal->move();
}

int main(){
    cout<<"=== 虚函数示例 ==="<<endl;
    
    Animal*animals[]={
        new Dog("旺财"),
        new Cat("咪咪")
    };
    
    for(int i=0;i<2;i++){
        animals[i]->speak();
        animals[i]->move();
    }
    
    cout<<"\n演示通过函数传递:"<<endl;
    animalAction(new Dog("小白"));
    
    for(int i=0;i<2;i++){
        delete animals[i];
    }
    
    return 0;
}