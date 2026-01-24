#include<iostream>
#include<string>
using namespace std;

class Shape{
protected:
    string name;
    
public:
    Shape(string n):name(n){}
    
    virtual double area()=0;
    virtual void draw()=0;
    
    virtual void info(){
        cout<<"这是一个形状: "<<name<<endl;
    }
    
    virtual ~Shape(){}
};

class Circle:public Shape{
private:
    double radius;
    
public:
    Circle(string n,double r):Shape(n),radius(r){}
    
    double area()override{
        return 3.14159*radius*radius;
    }
    
    void draw()override{
        cout<<"绘制圆形: "<<name<<endl;
    }
    
    void info()override{
        cout<<"这是一个圆形，半径为: "<<radius<<endl;
    }
};

class Rectangle:public Shape{
private:
    double width,height;
    
public:
    Rectangle(string n,double w,double h):Shape(n),width(w),height(h){}
    
    double area()override{
        return width*height;
    }
    
    void draw()override{
        cout<<"绘制矩形: "<<name<<endl;
    }
    
    void info()override{
        cout<<"这是一个矩形，宽为: "<<width<<"，高为: "<<height<<endl;
    }
};

int main(){
    cout<<"=== 纯虚函数示例 ==="<<endl;
    
    Shape*shapes[]={
        new Circle("圆形A",5.0),
        new Rectangle("矩形B",4.0,6.0)
    };
    
    for(int i=0;i<2;i++){
        shapes[i]->info();
        shapes[i]->draw();
        cout<<"面积: "<<shapes[i]->area()<<endl;
        cout<<endl;
    }
    
    for(int i=0;i<2;i++){
        delete shapes[i];
    }
    
    return 0;
}