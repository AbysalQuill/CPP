#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 返回x的绝对值并赋予y的符号
    double x=3.7,y=-2.5;
    cout<<"copysign("<<x<<","<<y<<") = "<<copysign(x,y)<<endl;
    return 0;
}