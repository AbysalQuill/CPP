#include <iostream>
#include <string>
using namespace std;

// 基类：车辆
class Vehicle{
protected:
    string brand;
    int year;
    
public:
    Vehicle(string b, int y): brand(b), year(y) {
        cout << "Vehicle 构造函数被调用" << endl;
    }
    
    void start(){
        cout << brand << " 启动了" << endl;
    }
    
    virtual void displayInfo(){
        cout << "车辆品牌: " << brand << ", 生产年份: " << year << endl;
    }
    
    virtual ~Vehicle(){
        cout << "Vehicle 析构函数被调用" << endl;
    }
};

// 派生类：汽车
class Car: public Vehicle{
protected:
    int doors;
    
public:
    Car(string b, int y, int d): Vehicle(b, y), doors(d) {
        cout << "Car 构造函数被调用" << endl;
    }
    
    void honk(){
        cout << "汽车鸣笛: 嘟嘟嘟" << endl;
    }
    
    void displayInfo() override{
        cout << "汽车品牌: " << brand << ", 生产年份: " << year 
             << ", 门数: " << doors << endl;
    }
    
    ~Car(){
        cout << "Car 析构函数被调用" << endl;
    }
};

// 二级派生类：电动汽车
class ElectricCar: public Car{
private:
    double batteryCapacity;  // 电池容量(kWh)
    string batteryType;      // 电池类型
    
public:
    ElectricCar(string b, int y, int d, double bc, string bt): 
        Car(b, y, d), batteryCapacity(bc), batteryType(bt) {
        cout << "ElectricCar 构造函数被调用" << endl;
    }
    
    void charge(){
        cout << "电动车电池容量: " << batteryCapacity << " kWh，类型: " 
             << batteryType << "，正在充电" << endl;
    }
    
    void displayInfo() override{
        cout << "电动汽车品牌: " << brand << ", 生产年份: " << year 
             << ", 门数: " << doors 
             << ", 电池容量: " << batteryCapacity << " kWh" << endl;
    }
    
    ~ElectricCar(){
        cout << "ElectricCar 析构函数被调用" << endl;
    }
};

int main(){
    cout << "=== 多级继承示例 ===" << endl;
    
    ElectricCar tesla("Tesla Model 3", 2023, 4, 75.0, "锂离子");
    
    cout << endl;
    
    // 使用各级父类的方法
    tesla.start();      // Vehicle 的方法
    tesla.honk();       // Car 的方法
    tesla.charge();     // ElectricCar 的方法
    
    cout << endl;
    
    // 显示信息 - 多态性
    tesla.displayInfo();  // 调用 ElectricCar 的重写版本
    
    cout << endl;
    
    // 通过不同级别的指针访问
    Vehicle* vehiclePtr = &tesla;
    vehiclePtr->displayInfo();  // 依然调用 ElectricCar 的版本
    
    cout << endl;
    
    // 验证析构顺序
    cout << "即将离开作用域..." << endl;
    
    return 0;
}