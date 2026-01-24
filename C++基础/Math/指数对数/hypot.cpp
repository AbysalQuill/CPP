#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 计算直角三角形斜边长度，即sqrt(x^2 + y^2)
    double x=3.0,y=4.0;
    cout<<"hypot("<<x<<","<<y<<") = "<<hypot(x,y)<<endl;
    return 0;
}