#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 计算y/x的反正切值，使用两个参数确定角度和象限
    double y=1.0,x=1.0;
    cout<<"atan2("<<y<<","<<x<<") = "<<atan2(y,x)<<" rad = "<<atan2(y,x)*180/3.14159265<<" deg"<<endl;
    return 0;
}