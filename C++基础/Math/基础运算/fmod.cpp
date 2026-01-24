#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 计算浮点数相除的余数
    double x=5.3,y=2.1;
    cout<<"fmod("<<x<<","<<y<<") = "<<fmod(x,y)<<endl;
    return 0;
}