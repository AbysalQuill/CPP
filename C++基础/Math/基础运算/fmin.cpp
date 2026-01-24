#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 返回两个浮点数中的较小值
    double x=3.7,y=2.5;
    cout<<"fmin("<<x<<","<<y<<") = "<<fmin(x,y)<<endl;
    return 0;
}