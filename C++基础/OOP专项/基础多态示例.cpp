#include<iostream>
#include<string>
using namespace std;

//基类 - 图形类，包含虚函数
class Shape{
protected:
    string name;  //图形名称
    
public:
    //构造函数
    Shape(string n):name(n){}
    
    //虚函数 - 绘制图形
    virtual void draw(){
        cout<<"绘制图形: "<<name<<endl;
    }
    
    //虚函数 - 计算面积
    virtual double area(){
        return 0;
    }
    
    //虚析构函数
    virtual ~Shape(){}
};

//圆形类，继承自图形类
class Circle:public Shape{
private:
    double radius;  //半径
    
public:
    //构造函数
    Circle(string n,double r):Shape(n),radius(r){}
    
    //重写绘制方法
    void draw()override{
        cout<<"绘制圆形: "<<name<<" (半径: "<<radius<<")"<<endl;
    }
    
    //重写计算面积方法
    double area()override{
        return 3.14159*radius*radius;
    }
};

//矩形类，继承自图形类
class Rectangle:public Shape{
private:
    double width,height;  //宽和高
    
public:
    //构造函数
    Rectangle(string n,double w,double h):Shape(n),width(w),height(h){}
    
    //重写绘制方法
    void draw()override{
        cout<<"绘制矩形: "<<name<<" ("<<width<<"x"<<height<<")"<<endl;
    }
    
    //重写计算面积方法
    double area()override{
        return width*height;
    }
};

int main(){
    cout<<"=== 基础多态示例 ==="<<endl;
    
    //创建不同图形对象的指针数组
    Shape*shapes[]={
        new Circle("圆形A",5.0),
        new Rectangle("矩形B",4.0,6.0),
        new Circle("圆形C",3.0)
    };
    
    //通过基类指针调用，体现多态性
    for(int i=0;i<3;i++){
        shapes[i]->draw();  //调用实际对象的draw方法
        cout<<"面积: "<<shapes[i]->area()<<endl;  //调用实际对象的area方法
    }
    
    //释放内存
    for(int i=0;i<3;i++){
        delete shapes[i];
    }
    
    return 0;
}