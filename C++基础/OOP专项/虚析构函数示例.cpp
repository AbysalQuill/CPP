#include <iostream>
#include <string>
using namespace std;

// 基类 - 有虚析构函数
class Base{
protected:
    string name;
    
public:
    Base(string n): name(n) {
        cout << "Base 构造函数被调用，创建: " << name << endl;
    }
    
    virtual void show(){
        cout << "这是基类对象: " << name << endl;
    }
    
    // 虚析构函数 - 确保派生类析构函数被正确调用
    virtual ~Base(){
        cout << "Base 虚析构函数被调用，销毁: " << name << endl;
    }
};

// 派生类
class Derived: public Base{
private:
    int* data;
    
public:
    Derived(string n, int size): Base(n) {
        data = new int[size];
        for(int i = 0; i < size; i++){
            data[i] = i;
        }
        cout << "Derived 构造函数被调用，分配了 " << size << " 个整数" << endl;
    }
    
    void show() override{
        cout << "这是派生类对象: " << name << endl;
    }
    
    ~Derived(){
        cout << "Derived 析构函数被调用，释放动态内存" << endl;
        if(data != nullptr){
            delete[] data;
            data = nullptr;
        }
    }
};

// 没有虚析构函数的基类（用于对比）
class BaseWithoutVirtualDestructor{
protected:
    string name;
    
public:
    BaseWithoutVirtualDestructor(string n): name(n) {
        cout << "BaseWithoutVirtualDestructor 构造函数被调用，创建: " << name << endl;
    }
    
    // 没有虚析构函数
    ~BaseWithoutVirtualDestructor(){
        cout << "BaseWithoutVirtualDestructor 析构函数被调用，销毁: " << name << endl;
    }
};

class DerivedWithoutVirtualDestructor: public BaseWithoutVirtualDestructor{
private:
    int* data;
    
public:
    DerivedWithoutVirtualDestructor(string n, int size): BaseWithoutVirtualDestructor(n) {
        data = new int[size];
        for(int i = 0; i < size; i++){
            data[i] = i;
        }
        cout << "DerivedWithoutVirtualDestructor 构造函数被调用，分配了 " << size << " 个整数" << endl;
    }
    
    ~DerivedWithoutVirtualDestructor(){
        cout << "DerivedWithoutVirtualDestructor 析构函数被调用，释放动态内存" << endl;
        if(data != nullptr){
            delete[] data;
            data = nullptr;
        }
    }
};

int main(){
    cout << "=== 虚析构函数示例 ===" << endl;
    
    cout << "\n--- 使用虚析构函数的类层次 ---" << endl;
    {
        Base* obj1 = new Derived("带虚析构的对象", 5);
        obj1->show();
        delete obj1;  // 虚析构函数确保调用派生类的析构函数
    }
    
    cout << "\n--- 没有虚析构函数的类层次（对比） ---" << endl;
    {
        BaseWithoutVirtualDestructor* obj2 = new DerivedWithoutVirtualDestructor("无虚析构的对象", 5);
        delete obj2;  // 只调用基类析构函数，不调用派生类析构函数（内存泄漏风险）
    }
    
    cout << "\n程序结束" << endl;
    
    return 0;
}