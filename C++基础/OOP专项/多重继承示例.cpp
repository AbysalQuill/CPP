#include <iostream>
#include <string>
using namespace std;

// 第一个基类：飞行能力
class Flyable{
protected:
    double maxAltitude;
    
public:
    Flyable(double altitude): maxAltitude(altitude) {}
    
    void fly(){
        cout << "可以飞行，最高高度: " << maxAltitude << " 米" << endl;
    }
    
    virtual void takeOff(){
        cout << "起飞!" << endl;
    }
    
    virtual void land(){
        cout << "降落!" << endl;
    }
    
    virtual ~Flyable() {}
};

// 第二个基类：游泳能力
class Swimmable{
protected:
    double maxDepth;
    
public:
    Swimmable(double depth): maxDepth(depth) {}
    
    void swim(){
        cout << "可以游泳，最大深度: " << maxDepth << " 米" << endl;
    }
    
    virtual void dive(){
        cout << "潜水!" << endl;
    }
    
    virtual void surface(){
        cout << "浮出水面!" << endl;
    }
    
    virtual ~Swimmable() {}
};

// 第三个基类：陆地行动
class Walkable{
protected:
    double maxSpeed;
    
public:
    Walkable(double speed): maxSpeed(speed) {}
    
    void walk(){
        cout << "可以行走，最高速度: " << maxSpeed << " km/h" << endl;
    }
    
    virtual void run(){
        cout << "奔跑!" << endl;
    }
    
    virtual ~Walkable() {}
};

// 多重继承：鸭子同时具备飞行、游泳和行走能力
class Duck: public Flyable, public Swimmable, public Walkable{
private:
    string name;
    
public:
    Duck(string n, double alt, double depth, double speed): 
        Flyable(alt), Swimmable(depth), Walkable(speed), name(n) {}
    
    // 重写基类方法
    void takeOff() override{
        cout << name << " 扇动翅膀起飞!" << endl;
    }
    
    void land() override{
        cout << name << " 轻盈降落!" << endl;
    }
    
    void dive() override{
        cout << name << " 潜入水中!" << endl;
    }
    
    void surface() override{
        cout << name << " 浮出水面!" << endl;
    }
    
    void run() override{
        cout << name << " 摆动身体奔跑!" << endl;
    }
    
    // 鸭子特有的方法
    void quack(){
        cout << name << " 呱呱叫!" << endl;
    }
    
    void showInfo(){
        cout << "鸭子信息 - 名字: " << name << endl;
        fly();   // Flyable 的方法
        swim();  // Swimmable 的方法
        walk();  // Walkable 的方法
    }
};

int main(){
    cout << "=== 多重继承示例 ===" << endl;
    
    // 创建鸭子对象
    Duck duck("唐老鸭", 100, 5, 20);
    
    duck.showInfo();
    cout << endl;
    
    // 使用各种能力
    duck.takeOff();
    duck.fly();
    duck.land();
    cout << endl;
    
    duck.dive();
    duck.swim();
    duck.surface();
    cout << endl;
    
    duck.run();
    duck.quack();
    
    return 0;
}